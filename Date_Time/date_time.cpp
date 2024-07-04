/*
The <ctime> library allows us to work with dates and times.
*/

/*
dispaly current date and time:


1.time()---->function gives us a timestamp representing the current date and time
2.ctime()--->function to show the date and time that a timestamp represents
*/
#include <iostream>
#include <ctime>
using namespace std;
int main(){

    // Get the timestamp for the current date and time
    time_t timestamp;
    time(&timestamp);

    // Display the date and time represented by the timestamp
    cout<<ctime(&timestamp);
    return 0;
}

/*
Two ways to use the time() function

1.The time() function writes a timestamp to the memory location given by the parameter, but it also returns the timestamp's value.

2.An alternative way to use the time() function is to pass in a NULL pointer and use the return value instead.

time_t timestamp = time(NULL);
*/
