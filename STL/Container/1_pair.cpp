#include <bits/stdc++.h>
using namespace std;
class Pair{
    public:
    pair<int,int> p;
    pair<int,pair<int,int>> pp;
    vector<pair<int,int>> v;
    pair<pair<int,int>,pair<int,int>> nes;
    Pair(){
        p={-1,-1};
        pp={-1,{-1,-1}};
        
    }


};
int main(){
    Pair obj;
    obj.p={1,3};
    cout<<obj.p.first<<" "<<obj.p.second<<endl;
    obj.v={{1,2},{2,6}};
    cout<<obj.v[1].second<<endl;

    obj.nes={{1,3},{3,2}};
    cout<<obj.nes.second.first;
    
    
    return 0;
}