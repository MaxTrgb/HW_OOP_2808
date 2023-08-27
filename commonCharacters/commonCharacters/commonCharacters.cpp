#include <iostream>
#include "myString.h"
using namespace std;

int main()
{
    // Create a myString object named str1 with the value "sdqcg".
    myString str1("sdqcg");

    // Create another myString object named str2 with the value "rgfas34".
    myString str2("rgfas34");

    // Perform character intersection between str1 and str2 using the overloaded operator*.
    myString str3 = str1 * str2;

    // Output the resulting string after character intersection.
    cout << str3.getResultStr() << endl;

    // Return 0 to indicate successful program execution.
    return 0;
}
