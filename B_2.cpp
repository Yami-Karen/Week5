#include <iostream>
#include <iomanip>
using namespace std;
bool compare(int a[],int b[],int n)
{
    for (int i = 0;i < n;i++)
     for (int i = 0;j < n;j++)
      if (a[i] != a[j])
       return false;
    return true;       
}
int main()
{
    std << boolalpha;
    int n;
    cin >> n;
    int a[n],b[n];
    for (int i = 0;i < n;i++) cin >> a[i];
    for (int i = 0;i < n;i++) cin >> b[i];
    cout << compare(a,b,n);
    return 0;
}