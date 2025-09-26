#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int count1 = 0, count2 = 0;
     while(n%2==0)
        
        {
            n /= 2;
            count1++;
        }
        while(n%3==0)
        {
            n /= 3;
            count2++;
        }
        if(n!=1 || count1>count2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 2 * count2 - count1 << endl;
        }
        
    }
}