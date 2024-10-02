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



    // conversion of the vector/array into the deque
    //vector
    deque<int> dq(v.begin(),v.end());
    //array
    deque<int> dq(arr,arr+n);


    //right rotating the deque by one place
    dq.push_back(dq.back());
    dq.pop_back();

    
}
