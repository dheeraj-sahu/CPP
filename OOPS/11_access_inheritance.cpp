#include <bits/stdc++.h>
using namespace std;
class Employee{
    protected: //protected access specifier
    int salary;
};
class Programmer:public Employee{
    public:
    int bonus;
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Programmer obj;
    obj.setSalary(3000000);
    obj.bonus=233300;
    cout<<obj.getSalary()+obj.bonus<<endl;
    return 0;
}