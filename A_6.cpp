#include <iostream>
using namespace std;
void find(int a[], int s, int f,int k)
{
    int n = (s + f) / 2;
    if (a[n] == k) cout << n + 1;
    else
    {
        if (a[n] > k) find(a, s, n, k);
        else find(a, n, f, k);
    }
}
int main()
{
    int k = 2, n;
    int a[5] = { 1,2,3,4,5 };
    int s = 0, f = 4;
    if (k == a[0])
    {
        cout << 1;
        goto cm;
    }
    else if (k == a[4])
    {
        cout << 5;
        goto cm;
    }
    while (true)
    {
        n = (s + f) / 2;
        if (a[n] == k)
        {
            cout << n + 1;
            goto cm;
        }
        else
        {
            if (a[n] > k) f = n;
            else s = n;
        }
    }
cm:
    cout << endl;
    find(a, 0, 4, k);
    // Dạ không có test ạ
    return 0;
}