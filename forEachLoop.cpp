#include "iostream"
using namespace std;
int main()
{
    int data[5] = {1,2,3,4,5};
    for(int i :data)
    {
        cout<<"Values are : "<<i <<", ";
    }
    return 0;
}