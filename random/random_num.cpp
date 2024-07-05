#include<iostream>
#include <ctime>
#include<cstdlib> //library for rand()
using namespace std;
int main(){
    cout<<rand();
    cout<<endl;
    cout<<rand()%101;//to get random number between 0 and 100
    cout<<endl;
    
    return 0;

}
