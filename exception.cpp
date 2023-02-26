#include "iostream"
using namespace std;
int main()
{
    try {
        int userAge = 11;
        if (userAge >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw (userAge);
        }
    }
    catch (int myNumber) {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Your Age is: " << myNumber;
    }
    return 0;
}