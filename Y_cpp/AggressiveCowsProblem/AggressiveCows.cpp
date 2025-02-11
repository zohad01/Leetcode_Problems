#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPossible(vector<int> &arr, int N, int C, int MinAllowedDis){  //O(n)
    int cows = 1, lastStallPos = arr[0];
    for(int i = 1; i < N -1; i++){
        if(arr[i] - lastStallPos >= MinAllowedDis){
            cows++;
            lastStallPos = arr[i];
        }
        if(cows == C) return true;
    }
    return false;
}
int getDistance(vector<int> &arr, int N, int C){  // O(nlogn)
    sort(arr.begin(), arr.end());
    int st = 1, end = arr[N-1] - arr[0], ans = -1;
    while(st<=end){ // O(log(Range) * N)
        int mid = st + (end - st) / 2;
        if(isPossible(arr, N, C, mid)){
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    } 
    return ans;
}
int main(){
    int N = 5 , C = 3;
vector<int> arr = {1,2,8,4,9};
cout<<getDistance(arr, N, C)<<endl;
return 0;
}