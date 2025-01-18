#include<iostream>
using namespace std;

int num(int n){
    if(n%2 ==0){
        cout <<"even :";
    }
    else{
        cout<<"odd :";
    }
    return n;
}


int main() {
    cout<< num(7);
    return 0;
}