#include<iostream>
using namespace std;
int main()
{
    int n,count;
    cin >> n;
    int bill = 0;
    int d[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        bill += n / d[i];
        n %= d[i];
    }
    cout << bill;
}