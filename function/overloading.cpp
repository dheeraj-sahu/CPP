/*

Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. 
*/
#include <bits/stdc++.h>
using namespace std;
int Addition(int a,int b){
    return a+b;
}
int Addition(double a,double b){
    return (int)a+b;
}
int Addition(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<Addition(2,3);
    cout<<endl;
    cout<<Addition(23,4,4);
    return 0;
}