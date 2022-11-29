#include <iostream>
#include <vector>

using namespace std;




int main()
{
    vector<int> v1={4,6,0,4,7};

    vector<int> v(5,4);       //in this i make vector with 5 places and all with value 4

    swap(v,v1);              //this line will swap 2 vectors 

    cout<<v.empty()<<endl;  //this line will check the vector is empty or not if it is empty return 1 else return 0 

    cout<<v.front()<<endl;  //this will print the first vakue 

    cout<<v.back()<<endl;   //this will print the last value


    cout<< *v.begin()<<endl;  //this will print the index of first value 
 
    cout<< *(v.end()-1)<<endl;    //this will print the index of the last value 


    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v1[i]<<endl;
    // }

    return 0;
}