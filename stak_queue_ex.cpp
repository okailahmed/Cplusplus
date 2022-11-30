#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <stack>
#include <queue>



using namespace std;

int main()
{
    //stack  : last in first out
    //queue  : first in sirst out 

    // stack<int> s;

    // s.push(3);
    // s.emplace(5);
    // s.push(7);
    

    // while(!s.empty())
    // {
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }


    // queue<int> q;

    // q.push(3);
    // q.push(6);
    // q.emplace(2);

    // q.pop();

    // while(!q.empty())
    // {
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }

    // priority_queue<int> pq;  //for this element will be arranged from  to low 

    // pq.push(3);
    // pq.push(6);
    // pq.push(8);
    // pq.emplace(2);
    // pq.push(5);

    // pq.pop();
    
    // while(!pq.empty())
    // {
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }


     priority_queue<int , deque<int>, greater<>> pq;  //for this we make queue work with deque

    pq.push(3);
    pq.push(6);
    pq.push(8);
    pq.emplace(2);
    pq.push(5);

    pq.pop();
    
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }

    return 0;
}