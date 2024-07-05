#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    // Get a different random number each time the program runs
    srand(time(0));
    // Generate a random number between 0 and 100
    int rand_num=rand()%101;
    cout<<rand_num;
    return 0;

}