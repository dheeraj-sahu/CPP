#include <bits/stdc++.h>
using namespace std;
void explainDeque(){
    deque<int> dq;
    dq.push_back(1);//{1}
    dq.emplace_back(3);//{1,3}
    dq.push_front(5);//{5,1,3};
    dq.emplace_front(9);//{9,5,1,3}
    dq.pop_back();//{9,5,1}
    dq.pop_front();//{5,1}

    dq.back();//1
    dq.front();//5

    //rest functions are same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}