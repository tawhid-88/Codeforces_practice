#include<iostream>
using namespace std;
int main()
{
    int n,a,count;
    count = 0;
    cin >> n >> a;
    int s[n][a];
    for (int i = 0; i < n; i++)
    {
        
            cin >> s[i][0]>>s[i][1];
         
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (s[i][0] * s[j][1] == s[i][1] * s[j][0])
            {
                count++;
            }
        }
    }
    cout << count;
}