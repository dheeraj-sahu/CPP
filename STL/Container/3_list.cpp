#include <bits/stdc++.h>
using namespace std;
void explainList(){
    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}
    ls.push_front(5);//{5,2,4}
    ls.emplace_front(9);//{9,5,2,4}


    //rest function same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
    //same as vector but list also provide the front operations
}