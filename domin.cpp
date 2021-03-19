#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void createMap(int* f[], int m, int n, int k)
{
    srand(time(NULL));
    int b = k;
    int i;
    int j;
    while (b > 0)
    {
        i = rand() % m + 1;
        j = rand() % n + 1;
        if (f[i][j] == -1) {f[i][j] = -2; b--;}
    }
}
void printMap(int* f[], int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (f[i][j] != -1 && f[i][j] != -2) cout << f[i][j] << " ";
            else cout << "* ";
        }
        cout << endl;
    }
}
int t;
int check(int* f[], int x, int y)
{
    int s = 0;
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
            if (f[x + i][y + j] == -2) s++;
    return s;
}
void spill(int* f[], int x, int y,int m,int n)
{
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
            if (x + i >= 1 && x + i <= n && y + j >= 1 && y + j <= n && f[x + i][y + j] == -1)
                if (check(f, x + i, y + j) == 0)
                {
                    t--;
                    f[x + i][y + j] = check(f, x + i, y + j);
                    spill(f, x + i, y + j, m, n);
                }
                else {f[x + i][y + j] = check(f, x + i, y + j); t--;}
}
int main()
{
    int m, n, k, x, y;
    cin >> m >> n >> k;
    int* f[12];
    for (int i = 0; i <= m + 1; i++) f[i] = new int[n + 2];
    for (int i = 0; i <= m + 1; i++)
        for (int j = 0; j <= n + 1; j++) f[i][j] = -1;
    t = m * n - k;
    createMap(f, m, n, k);
    printMap(f, m, n);
    while (t > 0)
    {    	
        cout << "(x,y): ";
        cin >> x >> y;
        if (f[x][y] == -2)
        {
            cout << "YOU'RE DEAD";
            return 1;
        }
        else
        {
        	system("CLS");
            spill(f, x, y, m, n);
            printMap(f, m, n);
        }
        cout << endl;
    }
    cout << "YOU WIN";
    return 0;
}
