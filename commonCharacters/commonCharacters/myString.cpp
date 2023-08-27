#include "myString.h"

// Default constructor: Initializes an empty myString object.
myString::myString() {
    str = "";
}

// Parameterized constructor: Initializes a myString object with the provided string.
myString::myString(string str) {
    this->str = str;
}

// Member function to get the content of the myString object.
string myString::getResultStr() {
    return str;
}

// Overloaded operator* function to perform character intersection between two myString objects.
myString myString::operator*(myString str2) {

    myString temp;    // Create a temporary myString object to store the result.


    // Iterate through each character in the first myString object.
    for (int i = 0; i < this->str.length(); i++) {

        // Iterate through each character in the second myString object.
        for (int j = 0; j < str2.str.length(); j++) {

            // If a character from the first myString matches a character from the second myString.
            if (this->str[i] == str2.str[j]) {

                // Add the matching character to the result.
                temp.str += this->str[i];

                // Break out of the inner loop to avoid duplicate characters in the result.
                break;
            }
        }
    }

    // Return the resulting myString object containing the characters that appeared in both input myString objects.
    return temp;
}
