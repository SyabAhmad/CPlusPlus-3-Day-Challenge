#include "iostream"
#include "fstream"
using namespace std;
int main()
{

    string line;

    ifstream file = ifstream("data.txt");
    while (getline(file, line)) {
        cout << line;
    }

    return 0;
}