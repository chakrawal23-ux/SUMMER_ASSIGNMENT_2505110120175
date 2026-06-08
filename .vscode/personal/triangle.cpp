#include <iostream>

using namespace std;

int main()
{
    int n, j, i, y, z = 0, x;

    cout << "enter the number of rows=";
    cin >> n;
    int a = 1;
    for (i = 1; i <= n; i++)
    {
        for (x = 1; x <= n - i; x++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}