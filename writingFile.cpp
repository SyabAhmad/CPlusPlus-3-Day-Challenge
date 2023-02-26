#include "iostream"
#include "fstream"
using namespace std;
int main()
{

    string line = "de Developer";

    ofstream file("data.txt");
    file << line;
    file.close();
    return 0;
}