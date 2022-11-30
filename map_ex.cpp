#include <iostream>
#include <map>
#include <algorithm>

using namespace std;


int main(){


    //they are sorted unique and fast

    // map<int , char> m{{1,'a'},{2,'b'},{3,'c'}};

    // m.insert({5,'d'});
    // m.emplace(5,'i');

    // m[4] = 'e';


    // auto it= m.rbegin();

    // for(;it!= m.rend();++it)
    // {
    //     cout<< it->first <<":"<<it->second<<endl;
    // }

    // m.erase(3);  //this will erase key and value for 3 

    // m.erase(m.begin(),m.end());  //erase elements in this range 

    // m.erase(m.find(2), m.find(3)); //this will erase specific range 
    // map<int,char> m2;

    // //m2.insert(m.begin(),m.end());
    // m2.insert(m.find(2),m.find(4));


    // for(auto i:m2)
    // {
    //     cout<<i.first <<":"<<i.second<<endl;
    // }


    multimap<int,char> mm{{1,'a'},{1,'a'},{2,'b'},{4,'c'},{5,'d'},{5,'d'}};



    cout<<mm.count(1)<<endl;   //this will return the count for this key 

    auto it = mm.begin();


    for(;it != mm.end();++it)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }

    return 0;
}