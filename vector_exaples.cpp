#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main()
{
    vector<int> v={4,6,0,4,3,1,7};

    //vector<int> v1(5,4);       //in this i make vector with 5 places and all with value 4

   // swap(v,v1);              //this line will swap 2 vectors 



    // cout<<v.empty()<<endl;  //this line will check the vector is empty or not if it is empty return 1 else return 0 

    // cout<<v.front()<<endl;  //this will print the first vakue 

    // cout<<v.back()<<endl;   //this will print the last value


    // cout<< *v.begin()<<endl;  //this will print the index of first value 
 
    // cout<< *(v.end()-1)<<endl;    //this will print the index of the last value 

    // v.push_back(5);   // this will push value 5 and end of vector 

    // v.insert(v.begin()+1,8);   //this will insert value in specific postion 

    // v.emplace(v.end()-1,6);    //this is the same as v.insert 

    // v.pop_back();              //this will delet last element in the end

    // v.erase(v.begin()+1);     //this will erase the second element and also we can specify range 
    // //like this
    // v.erase(v.begin()+1,v.end()-1);  
    
          

    // cout<<"size is "<<v.size()<<endl;           //to get the acual size 
    // cout<<"capacity is "<<v.capacity()<<endl;   //to get the capacity 


    cout<< *min_element(v.begin(), v.end())<<endl;  //this will print min element between two postions 

    cout<< *max_element(v.begin(),v.end())<<endl;   //this will print max element between two postions 


    //sort(v.rbegin(),v.rend());    //this will sort all element between this two postion 

    reverse(v.rbegin(),v.rend());
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }



    return 0;
}