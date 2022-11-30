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


    queue<int> q;

    q.push(3);
    q.push(6);
    q.emplace(2);

    q.pop();

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }


    

    return 0;
}