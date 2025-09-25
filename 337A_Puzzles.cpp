#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int s[m];
    for (int i = 0; i <m; i++)
    {
        cin >> s[i];
    }
    sort(s, s + m);
    int min_Difference = 10001;
    for (int i = 0; i <= m-n; i++)
    {
        int diff = s[i + n - 1] - s[i];
        if (diff<min_Difference)
        {
            min_Difference = diff;
        }
    }
    cout << min_Difference << endl;

    return 0;
}
