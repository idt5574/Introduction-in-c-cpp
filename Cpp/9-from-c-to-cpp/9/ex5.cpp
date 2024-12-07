#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string msg;

    std::getline(cin, msg);

    for(int i = 0; i < 4; i++)
        cout << msg[i];

    cout << endl;

    return 0;
}