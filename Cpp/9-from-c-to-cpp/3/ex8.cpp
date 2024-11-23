#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double triangle_sq(int a, int b, int c)
{
    double p = ((double)a + (double)b + (double)c) / 2.0;

    return sqrt(p*(p - a)*(p - b)*(p - c));
}

int main()
{
    int a, b, c;
    
    cin >> a >> b >> c;

    double res = triangle_sq(a, b, c);

    cout << fixed << setprecision(2); // устанавливаем фиксированное количество знаков после запятой для вывода
    cout << res;

    return 0;
}