#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int available_time = 240 - k;
    int solve_count = 0;
    int time_used = 0;
    for (int i = 1; i <= n; i++)
    {
        time_used += i * 5;
        if (time_used > available_time)
            break;
        solve_count++;
    }
    cout << solve_count;
}