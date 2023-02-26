#include "iostream"
using namespace std;
class parent{
protected:
    string userName = "de Developer";
    int age = 23;
public:

};

class child: public parent{
public:
    void displayInformation()
    {
        cout<<"User Name: "<<parent::userName<<endl;
        cout<<"Age: "<<parent::age<<endl;
    }

};
int main()
{
    child child1;
    child1.displayInformation();
    return 0;
}