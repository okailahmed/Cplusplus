#include <iostream>
#include <string>

using namespace std;

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
    string_builtIn_functions();

    return 0;
}