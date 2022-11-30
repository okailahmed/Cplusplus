//=======================================================
//     function used in set 
//  1-size()
//  2-swap()
//  3-empty()
//  4-clear()
//  5-begin()
//  6-end()
//  7-rbegin()
//  8-rend()
//  9-insert()
//  10-emplace()
//  11-erase()
//  12-min
//  13-min_element()
//  14-max_element()
//  15-find_if()
//  16-for_each()
//===========================================================



#include <iostream>
#include <set>


using namespace std;


int main()
{
    set<int> s{10,5,7,3,4,9};  

    set<int, greater<>> st{5,1,3,6,8,3,2};

    // they will be sorted and unique , so it will be fast
    //there is no push_back  push_front only insert(emplace)
    //NO random access 

    //different between insert and emplace is insert can add more than one value 
    s.insert({8,12,54});    // i do not need to sepecify the position as it will be inserted in its order 

    st.emplace(4);   //is the same as insert but one value can added 

    



    cout<<"this is arranged assending as we do not use greater<>"<<endl;
    for(int i:s){cout<<i<<endl;}

    cout<<"this is arranged deassending as we use greater<>"<<endl;
    for(int j:st){cout<<j<<endl;}




 return 0; 
}

