#include <iostream>
#include <string>

using std::string;
using std::to_string;   // для конвертации чисел в строки
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int width, height;

    cin >> width >> height;

    string data_str = "Переменная width = " + to_string(width) + ", переменная height = " + to_string(height);

    cout << data_str << endl;

    return 0;
}