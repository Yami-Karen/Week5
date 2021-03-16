#include <iostream>
#include <cmath>
using namespace std;
int round_1(double n)
{
    if (ceil(n) - n <= 0.5) return ceil(n);
    else return floor(n);
}
int round_2(double n)
{
    int a = n;
    double x = (double)n - a;
    if (x <= 0.5) return a;
    else return a + 1;
}
int main()
{
    double c;
    cin >> c;
    cout << round_1(c) << " " << round_2(c);
    return 0;
}