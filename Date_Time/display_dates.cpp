#include<iostream>
#include <ctime>
using namespace std;
int main(){
    time_t timestamp=time(NULL);
    struct tm datetime=*localtime(&timestamp);
    cout<<asctime(&datetime);
    return 0;
}