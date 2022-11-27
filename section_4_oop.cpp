#include <iostream>
#include <string>


using namespace std;



class human{

private:
    string name;
    int age;
public:

    void setValues(string p_name,int p_age)
    {
        this->name = p_name;
        this->age = p_age;
    }
    void getValues()
    {
        this->age = this->age+1;
        cout<< this->name<<endl;
        cout<< this->age<<endl;
    }
    

};


int main()
{

    string name;
    int age;

    cout<<"please enter your name ";
    cin>>name;
    cout<<endl;
    cout<<"please enter your age ";
    cin>>age;
    cout<<endl;


    human h1;    //this object 

    h1.setValues(name, age);

    h1.getValues();


    return 0;
}