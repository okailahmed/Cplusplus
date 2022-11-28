#include <iostream>
#include <fstream>


using namespace std;


int main(){


    // char name[200];


    // ofstream h;     // this library help me to open file and write on it

    // h.open(R"(C:\Users\AAbdelkareem\Desktop\coding_area\C++\filesystem\example.txt)");

    // cout<<"Enter you name";

    // //getline(cin,name);  //this is with string 

    // cin.getline(name,sizeof(name));
 
    // h.write(name,sizeof(name));       // is equal to h.name   but .write(arry of character);

    // cout<< (h.is_open()? "yes": "no") <<endl;   //this method check if file is open or not 

    // h.close();


    char name[200];

    ifstream h; //this objct used to read from file 

     h.open(R"(C:\Users\AAbdelkareem\Desktop\coding_area\C++\filesystem\example.txt)");

     h.read(name,sizeof(name));

     cout<<name;

     h.close();

    return 0;
}