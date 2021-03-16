#include <iostream>
using namespace std;
void ar(int x[])
{
    for (int i = 0; i < 5; i++) cout << &x[i] << " ";
    cout << endl;
}
void s_tring(string s)
{
    cout << &s << endl;
}
int main()
{
    int a[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) cout << &a[i] << " ";
    cout << endl;
    string s;
    ar(a);
    cout << &s << endl;
    s_tring(s);
    return 0;
    // Cả 2 đều được truyền theo phương thức pass by reference
}