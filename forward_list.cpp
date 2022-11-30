//in this example we forward list is same as list but with all no back 

//================================================
//      Function used with list 
//  
//  2-swap()
//  3-empty()
//  4-clear()
//  5-front()
// 
//  7-begin()
//  8-end()
// 
//  
//  11-emplace()
//  
// 
//  
//  15-resize()
//  
//  
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
//
//  new for forward list only 
//  1-insert_after()
//  2-erase_after()
//  3-emplace_after()
//  4-splice_afetr()
//  5-before_begin() 
//==========================================================


#include <iostream>
#include <forward_list>
#include <algorithm>

using namespace std;

int main()
{
    forward_list<int> l{1,6,4,2,4,3};

   // l.insert_after(l.begin(),10);   //this will insert 10 after first element 

    l.insert_after(l.before_begin(), 10); //this will insert this value in the first place 
    
    for(int i: l){cout<<i<<endl;}


    return 0;
}