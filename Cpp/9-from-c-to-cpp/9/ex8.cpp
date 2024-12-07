#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string url;

    cin >> url;

    for(int i = 0; i < url.length(); i++) {
        if(url[i] == '-' && url[i + 1] == '-') {
            for(int j = i; j < url.length() - 1; j++) {
                url[j] = url[j + 1];
            }
            url.resize(url.length() - 1);
            i--;
        }
    }

    cout << url << endl;

    return 0;
}