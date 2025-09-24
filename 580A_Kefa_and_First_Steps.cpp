#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n];
    int count = 1;
    int maxCount = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i <=n-1; i++)
    {
        if(s[i]>=s[i-1])
        {
            count++;
            maxCount =max(maxCount,count);
        }
        else if (s[i] < s[i - 1])
        {
            count = 1;
            
        }
    }
    cout << maxCount;
}