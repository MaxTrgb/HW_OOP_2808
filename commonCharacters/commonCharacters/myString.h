#pragma once
#include <iostream>
using namespace std;

class myString
{
private:
    // Private member variable to store the string data.
    string str;

public:
    // Default constructor: Initializes an empty myString object.
    myString();

    // Parameterized constructor: Initializes a myString object with the provided string.
    myString(string str);

    // Member function to get the content of the myString object.
    string getResultStr();

    // Overloaded operator* function to perform character intersection between two myString objects.
    myString operator*(myString);
};

