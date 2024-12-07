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

    for(auto it = msg.end() - 1; it != msg.end() - 4; it--)
        cout << *it;
    
    cout << endl;

    return 0;
}