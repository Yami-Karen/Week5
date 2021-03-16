#include <iostream>
using namespace std;
int rev(int a, int b)
{
    if (a == b) return a;
    else
    {
        while (a != b)
        {
            if (a > b) a -= b;
            if (a < b) b -= a;
        }
        return a;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (rev(a, b) == 1) cout << "Yes";
    else cout << "No";
    return 0;
}