#include <iostream>

using namespace std;


int main(){


    //casting 

    int x,y,result;
    char op;

    cout<<"enter first number";
    cin>>x;
    cout<<endl;
    cout<<"enter second number";
    cin>>y;
    cout<<endl;
    cout<<"enter operation";
    cin>>op;
    cout<<endl;

    result = (op == '+') ? x+y : (op == '-') ? x-y : (op == '*') ? x*y : (op == '/') ? x/y:x%y; 

    cout<<"result = "<<result; 

    return 0;
}