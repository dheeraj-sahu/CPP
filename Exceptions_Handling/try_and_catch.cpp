/*
Exception handling in C++ consist of three keywords: try, throw and catch:

1.try--->The try statement allows you to define a block of code to be tested for errors while it is being executed.

2.throw--->The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

3. catch--->The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.


*/
//try and catch keyword comes in pair


/*
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}
*/



#include <iostream>
using namespace std;

int main() {
  try {
    int age = 23;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
}

//catch block only activated when there throw occur














