#include "iostream"
using namespace std;
int main()
{
    char option = '-';
    int value1 =  12;
    int value2 = 23;
    switch(option)
    {
        case '-':
            cout<<value1-value2;
            break;
        case '+':
            cout<<value1+value2;
            break;
        case '*':
            cout<<value1+value2;
            break;
        case '/':
            cout<<value1/value2;
            break;
        default:
            cout<<"Invalid Arguments"<<endl;
            break;
    }
    return 0;
}