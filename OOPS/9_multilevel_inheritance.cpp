// A class can also be derived from one class, which is already derived from another class.

#include <bits/stdc++.h>
using namespace std;
class GrandParent{
    public:
    string grand_father_name;

    public:
    void func(){//class method
        cout<<"Namaskar...";
    }
};
class Parent:public GrandParent{
    public:
    string parent_name;

    public:
    void func1(){
        cout<<"Namaste...";
    }

};
class Child:public Parent{
    public:
    string child_name;

    public:
    void func2(){
        cout<<"Hello...";
    }
};
int main(){
    //creating an object for child class and from that object i can call all the functionality of Parent as well as GrandParent class

    Child ch;
    ch.child_name="Dheeraj";
    ch.parent_name="Vijay";
    ch.grand_father_name="Kaleshwar";
    cout<<ch.child_name<<":"<<ch.parent_name<<":"<<ch.grand_father_name<<endl;
    ch.func2();
    ch.func1();
    ch.func();
    return 0;
}