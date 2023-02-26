#include "iostream"
using namespace std;
class student{
    protected:
        string userName = "de Developer";
        int age = 23;
    public:
        void display(){
            cout<<"Name: "<<userName<<endl;
            cout<<"Age: "<<age<<endl;
        }

    student(string name, int age){
        this->userName = name;
        this->age = age;
    }
};
int main()
{
    student std1("de Developer 1", 23);
    student std2("de Developer 2", 33);
    student std3("de Developer 3", 43);
    student std4("de Developer 4", 53);

    std1.display();
    std2.display();
    std3.display();
    std4.display();
    return 0;
}