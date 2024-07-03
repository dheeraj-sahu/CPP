// A class can also be derived from more than one base class, using a comma-separated list:

#include <bits/stdc++.h>
using namespace std;
//base class
class Base1{
    public:
    void base1(){
        cout<<"I am Base class 1";
    }
};
//another base class
class Base2{
    public:
    void base2(){
        cout<<"I am another Base Class";
    }
};
//derived class
class Helo:public Base1,public Base2{
    public:
    void classs(){
        cout<<"I am Class";

    }
};
int main(){
    //create an object for the derived class
    Helo obj;
    obj.base1();
    obj.base2();
    obj.classs();
    return 0;
}