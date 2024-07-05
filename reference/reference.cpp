
/*
&---> it can be used to create reference variable as well as the to get memory address of the variable
*/
#include <iostream>
using namespace std;
int main(){
    //creating a references
    string food="Chawal"; //food variable
    string &meal=food;//reference to the food

    //now we can use either variable food or the reference name meal to refer food

    cout<<food<<endl;//chawal
    cout<<meal<<endl;//chawal


    
    return 0;
}