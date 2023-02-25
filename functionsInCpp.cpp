#include "iostream"
using namespace std;
int doSum(int a,int b);
int main()
{
    cout<<doSum(2,3);
    return 0;
}
int doSum( int a, int b)
{
    return a+b;
}