/* There are two different data types used to store the date and time: time_t for timestamps and struct tm for datetime structures.

1. time_t ---->timestamps
2.struct tm---> datatime structures



timestamps-->represent a moment in time as a single number.
datetime struct--->are structures that represent different components of the date and time as members.



tm_sec-->The seconds within a minute
tm_min-->The minutes within an hour
tm_hour-->The hour within a day (from 0 to 23)
tm_mday-->The day of the month
tm_mon-->The month (from 0 to 11 starting with January)
tm_year-->The number of years since 1900
tm_wday-->The weekday (from 0 to 6 starting with Sunday)
tm_yday-->The day of the year (from 0 to 365 with 0 being January 1)
tm_isdst--> Positive when daylight saving time is in effect, zero when not in effect and negative when unknown
*/

/*
Formats-->

hours--->24hours format
months-->0-11(december==11)
year-->Years are represented relative to the year 1900.(The year 2024 would be represented as 124 because 124 years have passed since 1900.)

*/

/*
Creating Timestamps-->

time()--> function can only create a timestamp for the current date.
mktime()-->can create a timestamp for any date 
*/

// The mktime() function converts a datetime structure into a timestamp.

#include <iostream>
#include <ctime>
using namespace std;
int main(){
    struct tm datetime;
    time_t timestamp;


    datetime.tm_year=2024;
    datetime.tm_mon=7-1; //july
    datetime.tm_mday=5;
    datetime.tm_hour=12;
    datetime.tm_min=30;
    datetime.tm_sec=1;


    datetime.tm_isdst=-1;
    timestamp=mktime(&datetime);
    cout<<ctime(&timestamp);
    return 0;


}

