#include<iostream>
using namespace std;

int linearSearch(int *arr,int n,int key){
    // key= 6;
    for(int i=0; i<n;i++) {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 1,3,4,6,3,6,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<linearSearch(arr,n,1);
}