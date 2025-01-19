#include<iostream>
using namespace std;

int mul(int a,int b =1){
    int mul = a*b;
    return mul;
}

int main () {
    int m = mul(5,2);
    cout<<" multiple = " << m <<endl; 
    return 0;
}