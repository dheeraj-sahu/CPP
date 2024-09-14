#include <bits/stdc++.h>
using namespace std;
void explainPQ(){
    //maximum heap
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2};
    pq.emplace(19);///{19,8,5,2}

    cout<<pq.top();//19
    pq.pop();//{8,5,2}
    cout<<pq.top();//8

    //size swap empty function same as others

    //minimum heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5};
    pq.push(8);//{2,5,8}
    pq.emplace(19);//{2,5,8,19}

    cout<<pq.top();//2



    /*
    push-->O(logn)
    top--->O(1)
    pop-->O(logn)
    
    */

}