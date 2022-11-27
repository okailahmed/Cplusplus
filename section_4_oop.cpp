#include <iostream>
#include <string>


using namespace std;



class Human{
private:
    string name;
    int age;
public:

    Human(string name,int age)
    {
        this->name = name;
        this->age  = age;
    }
    void setValues(string p_name,int p_age)
    {
        this->name = p_name;
        this->age = p_age;
    }
    void getValues()
    {
        cout<< this->name<<endl;
        cout<< this->age<<endl;
    }
    

};


class father {

    private:
        string name;
        int age;
    public:
        string color;
        int age;
    protected:
        string home_no;

    void set_name()
    {

    }
    

};


class son: public father{


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


    Human h1 = Human("ahmed", 28);    //this object 


    h1.getValues();

    son s= son();

    s.color = "brown";


    return 0;
}