#include <iostream>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = -n; j <= n; j++)
            if (abs(j) < i) cout << "*";
            else cout << " ";
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}