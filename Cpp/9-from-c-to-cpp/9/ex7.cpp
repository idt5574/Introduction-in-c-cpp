#include <iostream>
#include <string>

enum {
    max_cities = 10
};

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string cities[max_cities];
    string res = "";
    int count{0};

    while (count < max_cities && cin >> cities[count])
    {
        count++;
    }
    
    for(int i = 0; i < count; i++) {
        if(cities[i].length() > 5)
            res += cities[i] + ' ';
    }
        
    cout << res << endl;

    return 0;
}