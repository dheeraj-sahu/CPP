/*
The fstream library allows us to work with files.


class             Description

ofstream---->     creates and writes to files
ifstream---->     reads from files
fstream----->     combination of ofstream and ifstream: creates, writes and reads
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // creates and open text file
    ofstream MyFile("13_text.txt");

    // write to the file
    MyFile << "Files can be tricky,but it is fun enough...";

    // close the file
    MyFile.close();
    return 0;
}