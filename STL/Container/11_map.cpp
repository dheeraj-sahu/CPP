#include <bits/stdc++.h>
using namespace std;
// map stores unique key in sorted order

//works in logn
void explainMap()
{
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.insert({3, 1});
    mpp.insert({2, 4});

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it=mpp.find(3);
    // cout<<*(it).second;

    auto it=mpp.find(5);

    //
    auto it=mpp.lower_bound(2);
    auto it=mpp.upper_bound(3);

    map<pair<int, int>, int> m;
    m[{2, 3}] = 10;


    map<int,pair<int,int>>mp;


    //erase,swap,size,empty are same as above

}