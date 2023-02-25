#include "iostream"
using namespace std;
struct student{
    string userName;
    int rollNumber;
};
int main()
{
    student std;
    std.userName = "De Developer";
    std.rollNumber = 12231;
    cout<<std.userName<<endl;
    cout<<std.rollNumber<<endl;
}