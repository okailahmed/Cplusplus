//================================================
//      Function used with list 
//  1-size()
//  2-swap()
//  3-empty()
//  4-clear()
//  5-front()
//  6-back()
//  7-begin()
//  8-end()
//  9-push_back()
//  10-insert()
//  11-emplace()
//  12-emplace_back()
//  13-pop_back()
//  14-erase()
//  15-resize()
//  16-rbegin()
//  17-rend()
//  18-min_element()
//  19-max_element()
//  20-sort()
//  21-reverse()
//  22-find_if()
//  23-for_each()   
//  24-push_front()
//  25-pop_front()
//  26-emplace_front()
//  27-remove()
//  28-merge()
//  29-assign()
//  30-splice()
//  31-uniqe()
//  32-remove_if()
//  33-sort()
//  34-reverse()
//==========================================================


#include <iostream>
#include <list>

using namespace std;


int main(){

    list<int> l={2,9,7,4,3,6,5,1};


    auto itb = l.begin();   //this is point to the first element 
    auto ite = l.end();     //this is point to the last element 

//     itb++; //we use ittrator for move to any index as it is not support with begin() and end in list 

//     itb--;

//    // l.erase(itb,ite);

//     cout<<"the result for this operation is "<<endl;

//     for(int i: l)
//     {
//         cout<<i<<endl;
//     }


    // auto it = l.begin();  //point to the first place 

    // it++;

    // *it = 6;

    // for(it =l.begin() ; it != l.end() ;it++)
    // {
    //     cout<< *it <<endl;
    // }


        l.sort();  //to sort element in assending way 

        l.sort(greater<int>());  //to sort elements in deassending way 

        l.reverse();          //to reverse element in the list 

        l.remove(5);           //this will remove all 5 elements 



        // this is will remove elemenst in a specific condition 
        l.remove_if([](int n){      
            return n%2;
        });

        for(int i : l)
        {
            cout<<i<<endl;
        }



    return 0;
}