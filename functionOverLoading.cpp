#include "iostream"
using namespace std;
int calculation(int a,int b);
int calculation(double a,double);
int main()
{
    cout<<calculation(2,3);
    cout<<calculation(2.3,4.5);
    return 0;
}
int calculation( int a, int b)
{
    return a+b;
}
int calculation( float a, float b)
{
    return a+b;
}