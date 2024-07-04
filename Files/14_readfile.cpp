#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // read a file
    string myText;
    ifstream MyReadFile("14_text.txt");
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }

    MyReadFile.close();
    return 0;
}