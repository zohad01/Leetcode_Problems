#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){    // O(n^2)
    for(int i = 0; i < n - 1; i++){
        bool isSwap = false;
        for(int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}


void SelectionSort(int arr[], int n){   // O(n^2)
    for(int i = 0; i < n - 1; i++){
        int smallIdx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[smallIdx]){
                smallIdx = j;
            }
        }
        swap(arr[i] , arr[smallIdx]);
    }
}




void InsertionSort(int arr[],int n){   // O(n^2)
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int n = 5;
int arr[] = {1,3,6,8,5};
// BubbleSort(arr, n);

// SelectionSort(arr, n);

InsertionSort(arr, n);
printArray(arr, n);
return 0;
}