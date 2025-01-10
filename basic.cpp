#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;

    cout<<"enter a :";
    cin >> a;

    cout<<"enter b :";
    cin >> b;

    cout<<"enter operater :";
    cin >> op;

    //calculater

    if(op == '+')
    {
        cout << " a+b = " << (a+b) <<endl; 
    }else if(op == '-')
    {
        cout << " a-b =" << (a-b) <<endl;
    }
    else if (op == '*')
    {
        cout << " a*b =" << (a*b) <<endl;
    }
    else if(op == '/')
    {
        cout << " a/b =" << (a/b) <<endl;
    }
    else if(op == '%')
    {
        cout << " a%b =" << (a%b) <<endl;
    }
    else {
        cout << " invalid operater"<<endl;
    }
    return 0;

} 
