#include<iostream>
using namespace std;
int main()
{
    int age = 23;
    int *pointer1 = &age;
    *pointer1 = 14;
    cout<<age;
}