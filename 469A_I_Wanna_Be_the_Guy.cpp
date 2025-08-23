#include <iostream>
using namespace std;

int main()
{
    int n, p, q, level;
    cin >> n;
    int covered[101] = {0};
    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        cin >> level;
        covered[level] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> level;
        covered[level] = 1;
    }
    bool all = true;
    for (int i = 1; i <= n; ++i)
    {
        if (!covered[i])
            all = false;
    }
    cout << (all ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}