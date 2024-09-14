#include <bits/stdc++.h>
using namespace std;
void builinPopCount(){
    //__builtin_popcount()--->return the number of set bit means 1's
    int num=7;//0000000......000111
    int cnt=__builtin_popcount(num);//3



    //__builtin_popcountll()--->if number is long long
    long long n=165786578687;
    int count=__builtin_popcountll(n);
}