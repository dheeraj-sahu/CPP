/*
Encapsulation-->The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).



If you want others to read or modify the value of a private member, you can provide public get and set methods.


*/
#include <bits/stdc++.h>
using namespace std;
class Car{
    private:
    string car_name;
    int car_yom;


    public:
    //setter
    void setName(string car_name){
        this->car_name=car_name;
    }
    void setYOM(int car_yom){
        this->car_yom=car_yom;
    }
    

    public:
    //getter
    string getName(){
        return car_name;
    }
    int getYear(){
        return car_yom;
    }
};

/*
Why Encapsulation?
It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
Increased security of data
*/
int main(){
    Car tesla;
    // tesla.car_name="Tesla";//it will throw an error because of private access specifier
    tesla.setName("Tesla");
    tesla.setYOM(2004);
    string name=tesla.getName();
    int year=tesla.getYear();
    cout<<name<<":"<<year<<endl;
    return 0;
}