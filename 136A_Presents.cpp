#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n],p[n];
    for (int i = 1; i<=n; i++)
    {
        cin >> s[i];
        p[s[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << " ";
    }
}