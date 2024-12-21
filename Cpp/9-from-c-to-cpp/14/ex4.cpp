#include <iostream>
#include <cstring>

using std::string;

bool check_password(const string str, string chars = "$%!?@#")
{
    if(str.length() >= 8)
        for(int i = 0; i < 7; i++)
            if(str.find(chars[i]) != -1)
                return true;

    return false;
}

int main()
{
    string str;
    std::cin >> str;
    bool res = check_password(str);

    std::cout << (res ? "yes" : "no");

    return 0;
}