#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        int n1 = n / 10;
        int n2 = -1 * ((abs(n) / 100) * 10 + (abs(n) % 10));
        cout << max(n1, n2) << endl;
    }
    return 0;
}