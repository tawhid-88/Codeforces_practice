#include<iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int h[n], a[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i!=j && h[i] == a[j])
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
