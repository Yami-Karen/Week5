#include <iostream>
using namespace std;
int main()
{
    int a;
    int* b = new int;
    cout << &a << " " << b << endl;
    *b = a;
    cout << &a << " " << b << endl;
    b = &a;
    cout << &a << " " << b << endl;
    // Biến thì cố định còn con trỏ thì trỏ đi đâu cũng được

    // Có thể khai báo một tham chiếu mà chưa trỏ ngay, hệ thống sẽ tự động trỏ đến vị trí rỗng

    int c;
    b = &c;
    cout << &c << " " << b << endl;
    // Có thể
    return 0;
}