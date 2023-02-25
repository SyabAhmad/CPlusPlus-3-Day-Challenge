#include<iostream>
using namespace std;
int main(){
    // for Loop
    for (int i = 0; i<10; i++) {
        cout<<" Values"<<i<<", ";
    }
    // while Loop
    cout<<endl;
    int i=0;
    while(i<10)
    {
        cout<<" Values"<<i<<", ";
        i++;
    }
    cout<<endl;
    // while Loop
    int j=0;
    do
    {
        cout<<" Values"<<j<<", ";
        j++;
    }while(j<10);
    return 0;
}