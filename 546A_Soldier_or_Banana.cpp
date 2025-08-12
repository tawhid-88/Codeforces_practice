#include<iostream>
using namespace std;
int main()
{
    int k, n, w, result;
    cin >> k >> n >> w;
    result = 0;
    for (int i = 1; i <= w;i++)
    {
        result += k * i;
    }
    if (result <= n)
    {
        cout << 0;
    }
    else
    {
        cout << result - n;
    }
}