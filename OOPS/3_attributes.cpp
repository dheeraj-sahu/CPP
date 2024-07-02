#include <bits/stdc++.h>
using namespace std;
class MyClass
{               // class name
public:         // access modifier
    int num;    // attribute(int variable)
    string str; // attribute(string variable)
};

int main()
{
    MyClass Obj;//create a object of MyClass
    //Access attributes and set values
    Obj.num=3;
    Obj.str="hello";

    
    //print attributes values
    cout<<Obj.num<<endl;
    cout<<Obj.str<<endl;
    return 0;
}