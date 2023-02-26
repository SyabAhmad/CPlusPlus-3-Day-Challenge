#include "iostream"
using namespace std;
class parent{
private:
    string userName = "de Developer";
public:
    void setData(string name)
    {
        name = userName;
    }
    string getData()
    {
        return userName;
    }

};
int main()
{
    parent p1;
    cout<<p1.getData();
    return 0;
}