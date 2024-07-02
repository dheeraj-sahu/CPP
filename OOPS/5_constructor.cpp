// A constructor in C++ is a special method that is automatically called when an object of a class is created.

#include <bits/stdc++.h>
using namespace std;
class Car{
    public:
    Car(){ //Constructor-->no return type of constructor 
        cout<<"Constructor...";
    }
};
//Constructor is automatically called when an object of class is created...
int main(){
    Car obj; //this object will automatically call the constructor
    
    return 0;
}