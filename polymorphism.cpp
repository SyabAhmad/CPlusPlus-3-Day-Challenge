#include "iostream"
using namespace std;
class parent{
public:
    void sound()
    {
        cout<<"Hello Parent"<<endl;
    }

};

class child: public parent{
public:
    void sound()
    {
        cout<<"Hello Child"<<endl;
    }

};
class nextChild: public child{
public:
    void sound()
    {
        cout<<"Hello Next Child"<<endl;
    }

};
int main()
{
    nextChild child1;
    child child2;
    parent parent1;

    child1.sound();
    child2.sound();
    parent1.sound();
    return 0;
}