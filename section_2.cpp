#include <iostream>
#include <string>
#include <cmath>

using namespace std;
const double pi= 22/7.0;



//this is function print array element with index and with pointer and address 
void array_with_index_and_pointer()
{
    int x[3] = {3, 6, 2};
    int i;

    // print array address and value with index

    for (i = 0; i < 3; i++)
    {
        cout << x[i] << " ";
        cout << &x[i] << endl;
    }
    // print array address and value with pointer
    for (i = 0; i < 3; i++)
    {
        cout << *(x + i) << " ";
        cout << x + i << endl;
    }
}

//this function to print factorial for n number 
int fact(int n)
{

    if(n==0)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}





//this function to pract call by refence function 
void swap(int *x , int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}



void string_builtIn_functions()
{
    string name1 = "ahmed 132";
    string name2 = "ali";

    //name2.assign(name1); //this function will assign name2 to name1

    //name2.swap(name1);   //this function will swap two string 

    //name1.erase(1,3);    //this function will erase sub of the string  

    //name1.replace(5 , 6 , " okeel");   //this function replace substring with string in the third place (pos to start , number of chars , string to be placed)

    //name1.replace(name1.find('1'),6,"okeel");//same like before bust start from char i seached for 

    //name1.insert(5," okeel");  //this function to insert string after postion specified 


    cout<<name1.at(1)<<endl;    //this function to get the char in this postion

    cout<<name1.substr(2,3)<<endl;  //this function return substring start from positon specified and with length in the next one

    cout<<name1.substr(2)<<endl;    //this function will return substring from 2 to the end 

    cout<<name1.find('d')<<endl;    //this function will search for char and return index of this char 

    cout<<name1.rfind('d')<<endl;    //this function will search for char from right and return index of this char 

    cout<<name1.find("hmd")<<endl;  //this function return index of this string 

    cout<<"name1= "<<name1<<endl;
    cout<<"name2 "<<name2<<endl;
}


void math_builtIn_functions()
{

    cout<<"max(4,9) is "<<max(4,9)<<endl;                         //this funciton will return maxmum of two numbers 
    cout<<"min(4,9) is "<<min(4,9)<<endl;                          //this funciton will return minimum of two numbers 
    cout<<"|-4|is "<<abs(-4)<<endl;                              //this funciton will return absolute value for this number 
    cout<<"sqrt(9) is "<<sqrt(9)<<endl;                         //this function will return the squar root for this number 
    cout<<"3^4 is "<<pow(3,4)<<endl;                            //this function will calc the power of 
    cout<<"2^4 is "<<exp2(4)<<endl;                             //this function will calc the power of 2 
    cout<<"log(10) is "<<log10(10)<<endl;                       // this function get the value for log(10)
    cout<<"ln(10) is "<<log(10)<<endl;                          //this function to get get the ln(10)
    cout<<"e^10 is "<<exp(1)<<endl;                              //
    cout<<"(e^10)-1 is "<<expm1(1)<<endl;                    
    cout<<"remainder(9,7) is "<<remainder(9,7)<<endl;        //get reminder 
    cout<<"fmod(7,6) is "<<fmod(7,6)<<endl;                  //get reminder 
    cout<<"copysign(3,-9) is "<<copysign(3,-9)<<endl;        // copy sign of the seconde to the first number 

    //we need to change the angle to radian to be acceptable 
    cout<<"sin(30) is "<<sin(30*pi/180)<<endl;
    cout<<"cos(60) is "<<cos(60*pi/180)<<endl;
    cout<<"tan(45) is "<<tan(45*pi/180)<<endl;
    
    cout<<"asin(0.5) is "<<asin(0.5)*pi/180<<endl;
    cout<<"acos(0.5) is "<<acos(0.5)*pi/180<<endl;
    cout<<"atan(1) is "<<atan(1)*pi/180<<endl;



    //this function near the number to the near high integer number 
    cout<<"ceil(6.1) is "<<ceil(6.1)<<endl;
    cout<<"ceil(6.9) is "<<ceil(6.9)<<endl;

    //this function near the number to the near small  integer number 
    cout<<"floor(6.1) is "<<floor(6.1)<<endl;
    cout<<"floor(6.9) is "<<floor(6.9)<<endl;

    //it near depend on it value ot it is > 0.5 it will be to the highest and visa verca 
    cout<<"round(6.1) is "<<round(6.1)<<endl;
    cout<<"round(6.9) is "<<round(6.9)<<endl;

    //same like before 
    cout<<"rint(6.1) is "<<rint(6.1)<<endl;
    cout<<"rint(6.9) is "<<rint(6.9)<<endl;

    //same like before 
    cout<<"nearbyint(6.1) is "<<nearbyint(6.1)<<endl;
    cout<<"nearbyint(6.9) is "<<nearbyint(6.9)<<endl;
}

void exception_cplusplus()
{
    try
    {
        int n;
        cout<<"Enter integer number "<<endl;
        cin>>n;
        if(n<0) throw "Error";
        cout<<"number "<<n<<endl;
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
    
}


int main()
{
    //array_with_index_and_pointer();

    //cout<<fact(7);


    // int x,y;
    // cout<<"Please enter to number to sawp them x y accordingly"<<endl;
    // cin>>x>>y;
    // cout<<endl;

    // swap(&x,&y);

    // cout<<"x= "<<x<<" y= "<<y;
    //string_builtIn_functions();

    //math_builtIn_functions();

    exception_cplusplus();

    return 0;
}