#include <bits/stdc++.h>
using namespace std;
class Class{
    public: //access specifier
    int x;// Public attribute
    private: //access specifier
    int y;// Private attribute

};


/*
1.public----> members are accessible from outside the class
2.private---> members cannot be accessed (or viewed) from outside the class
3.protected----> members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
*/
int main(){
    Class obj;
    obj.x=33;//Allowed
    // obj.y=33;//Not Allowed it will throw error
    return 0;



}