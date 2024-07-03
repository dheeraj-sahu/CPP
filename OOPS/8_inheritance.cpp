/*
it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

1.derived class(child)-->the class that inherits from another class
2.base class(parent)--->the class being inherited from
 */
#include <bits/stdc++.h>
using namespace std;

//Base Class
class Vehicle{
    public:
    string brand="Ford";

    public:
    void honk(){//class method
      cout<<"Tuut,tuut...."<<endl;

    }

};
//Derived Class
class Car:public Vehicle{
    public:
    string model="Mustang";

};
/*
 It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
*/
int main(){
    //create object  for derived class
    Car c1;
    c1.honk();
    c1.brand="Maruti";
    c1.model="2311";
    cout<<c1.brand<<":"<<c1.model<<endl;
    return 0;
}