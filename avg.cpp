#include<iostream>
using namespace std ;

int main () {
    int math ;
    int science ;
    int english ;

    //enter math number 
    cout<< "math :";
    cin>>math;

    //enter science 
    cout<<" science :";
    cin>>science;

    //enter english
    cout<< " english :";
    cin>>english ;

    //calculation 
    int avg = (math + science + english )/3;
    cout<< "avg = " << avg <<endl;
    return 0;
}