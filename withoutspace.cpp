#include<iostream>
using namespace std;

void printArr(int *arr , int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

}


int main() {
    int arr [] = {4,6,8,3,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start= 0; 
    int end = n-1;

    while(start < end) {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end]= temp;
        swap(arr[start] , arr[end]);
        start++;
        end--;

    }
    printArr(arr,n);
    return 0;
}