#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,6,2,1,8};
    int max = arr[0];
    int n=sizeof(arr)/sizeof(int);
    for(int i =0;i<n;i++){
        if(arr[i]>max){
           max = arr[i];
        }
        
    }
    cout<<" largest : "<<max<<endl;
    return 0 ;
}