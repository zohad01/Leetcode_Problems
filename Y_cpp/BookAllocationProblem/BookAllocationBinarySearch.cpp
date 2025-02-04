#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maxAllowdPages){  //Time Complexity of overall code O(logN * n)
    int pages = 0, student = 1;
    for(int i = 0; i < n; i++){
    if(arr[i] > maxAllowdPages){
        return false;
    }
    if(pages + arr[i] <= maxAllowdPages){
        pages += arr[i];
    }else{
        student++;
        pages = arr[i];
    }
}
    return student > m ? false : true;
}
int allocateBooks(vector<int> &arr, int n, int m){
    int sum = 0;
    if(m>n){
        return -1;
    }

    //O(n)
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum;

    //O(logN)
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
vector<int> arr = {2,1,3,4};
int m = 2, n = 4;
cout<<allocateBooks(arr, n , m);

return 0;
}