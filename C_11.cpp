#include <iostream>
#include <cmath>
using namespace std;
string trans(int n)
{
    string s;
    while (n > 0)
    {
        if (n % 2 == 0) s += '0';
        else s += '1';
        n /= 2;
    }
    for (int i = 0; i < (s.length() - 1)/2; i++)
    {
        char c = s[i];
        s[i] = s[s.length() - i - 1];
        s[s.length() - i - 1] = c;
    }
    return s;
}
int rev_trans(string s)
{
    int c = 0;
    for (int i = 0; i < s.length(); i++) c +=(int) (s[i] - 48) * pow(2, s.length() - 1 - i);
    return c;
}
int main()
{
    int n;
    cin >> n;
    cout << trans(n) << endl;
    cout << rev_trans(trans(n)) << endl;

    return 0;
}