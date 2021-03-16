#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void rev(int f[], int n)
{
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int l = j + 1; l < n; l++)
                if ((f[i] + f[j] + f[l]) % 25 == 0)
                    cout << f[i] << " " << f[j] << " " << f[l] << endl;
}
using namespace std;
int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    int* f;
    f = new int[n];
    for (int i = 0; i < n; i++) f[i] = rand() % 49 + 0;
    for (int i = 0; i < n; i++) cout << f[i] << " ";
    cout << endl;
    rev(f, n);
    return 0;
}