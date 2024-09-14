#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //if p1.second=p2.second
    if(p1.first>p2.first) return true;
    return false;
}
void explain(){
    int n;
    int arr[n];
    sort(arr,arr+n);//ascending order
    sort(arr,arr+n,greater<int>);//descending order

    vector<int> v;
    sort(v.begin(),v.end());//ascending order
    sort(v.begin(),v.end(),greater<int>);//descending order


    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    /*
    sort this array a in ascending order in accordance with second element and if the second element is same then sort it according to first element but in descending order.
    */
   sort(a,a+n,comp);//comp comparator is defined above




}