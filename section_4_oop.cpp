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


class Sum{  //this is abstract class as it is not contain body 
public:
    virtual void sum(int x, int y)=0; //this is abstract method as it is not contain and body 
};


class operation: public Sum{
    public:
        void sum(int x , int y) override{
            cout<<"sum = "<<x+y<<endl;
        }
};

int main()
{

    /*string name;
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
    */


   operation op;
   op.sum(2,2);


    return 0;
}