#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    start:
    cout<<"Enter Age:";
    cin>>age;
    if(age>18){
        cout<<"You can Vote..";
    }
    else{
        cout<<"You can't Vote..\n";
        goto start;
        cout<<endl;
    }
    return 0;

}