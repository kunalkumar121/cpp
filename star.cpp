#include<iostream>
using namespace std;

int main() {
    //outer loop
    for(int i = 1; i<=4; i++){
        //inner loop
        int n =i;
        for( int j=1; j<=n;j++)
        {
            cout<<"* " ;
        }
        cout <<endl;
    }
    return 0;
}