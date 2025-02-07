#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int maxAllowdTime){  //Time Complexity of overall code O(logN * n)
    int time = 0, painters = 1;
    for(int i = 0; i < n; i++){
    if(arr[i] > maxAllowdTime){         // maxAllowedTime = mid
        return false;
    }
    if(time + arr[i] <= maxAllowdTime){          
        time += arr[i];
    }else{
        painters++;
        time = arr[i];
    }
}
    return painters > m ? false : true;
}
int PaintTime(vector<int> &arr, int n, int m){
    int sum = 0, maxVal = INT_MIN;
    //O(n)
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int ans = -1;
    int st = maxVal, end = sum;

    //O(logN)
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
vector<int> arr = {40,30,10,20};
int m = 2, n = 4;
cout<<PaintTime(arr, n , m);

return 0;
}