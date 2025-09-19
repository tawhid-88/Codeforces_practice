#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, coins[100], sum = 0, mySum = 0, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
        sum += coins[i];
    }
    sort(coins, coins + n, greater<int>());
    for (int i = 0; mySum <= sum - mySum; ++i)
    {
        mySum += coins[i];
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}