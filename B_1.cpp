#include <iostream>
#include <iomanip>
using namespace std;
bool majority(bool a, bool b, bool c)
{
    return (a + b + c >= 2);
}
int main()
{
    bool a, b, c;
    cout << boolalpha;
    a = true;
    b = true;
    c = false;
    cout << majority(a, b, c) << endl;
    a = false;
    b = true;
    c = false;
    cout << majority(a, b, c) << endl;
    a = false;
    b = false;
    c = false;
    cout << majority(a, b, c) << endl;
    a = true;
    b = true;
    c = true;
    cout << majority(a, b, c) << endl;
    return 0;
}