#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int cnt = 0, temp = n, place = 1;
        int nums[5], idx = 0; // 5 digits max for 10^4
        while (temp > 0)
        {
            if (temp % 10)
            {
                nums[idx++] = (temp % 10) * place;
                cnt++;
            }
            temp /= 10;
            place *= 10;
        }
        cout << cnt << endl;
        for (int i = 0; i < idx; ++i)
            cout << nums[i] << " ";
        cout << endl;
    }
    return 0;
}