#include<iostream>

using namespace std;

int main(){

    int your_deg;
    cout<<"Enter your Degree ";
    cin>>your_deg;
    cout<<endl;

    if(your_deg < 50)
    {
        cout<<"unfortionatly you failed"<<endl;
    }else if(your_deg < 65)
    {
        cout<<"your grade is pass"<<endl;
    }else if(your_deg < 75)
    {
        cout<<"your grade is good"<<endl;
    }else if(your_deg < 85)
    {
        cout<<"your grade is very good"<<endl;
    }else
    {
        cout<<"your grade is Excellent "<<endl;
    }

    return 0;
}
