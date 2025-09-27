#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a[105];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n); 

    int res = 0;
    for (int i = 0; i < m; ++i)
    {
        if (a[i] < 0)
            res -= a[i]; 
    }
    cout << res << endl;
    return 0;
}