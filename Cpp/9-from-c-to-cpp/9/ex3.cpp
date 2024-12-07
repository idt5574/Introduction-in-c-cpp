#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string fname, lname;
    
    cin >> fname >> lname;

    string fio = fname + ", " + lname;

    return 0;
}