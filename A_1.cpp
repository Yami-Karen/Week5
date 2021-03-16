#include <iostream>
using namespace std;
int main()
{
    int a[3];
    char b[3];
    for (int i = 0; i < 3; i++) cout << (void*)&a[i] << " ";
    cout << endl;
    for (int i = 0; i < 3; i++) cout << (void*)&b[i] << " ";
    cout << endl;
    a[0] = 1;
    b[0] = 66;
    for (int i = 0; i < 3; i++) cout << (void*)&a[i] << " ";
    cout << endl;
    for (int i = 0; i < 3; i++) cout << (void*)&b[i] << " ";
    cout << endl;
    return 0;
    // Khá tương đồng nhau ở phần đầu, chỉ khác nhau ở 2 số chỉ cuối
    // Kết quả không thay đổi
}