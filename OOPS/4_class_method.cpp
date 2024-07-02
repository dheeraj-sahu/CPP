#include <bits/stdc++.h>
using namespace std;
class Human{
    public:
    void func(){ //function define inside the class
        cout<<"Class Methods"<<endl;
    }
};
int main(){
    Human obj;
    obj.func(); //call the methods
    
    return 0;
}