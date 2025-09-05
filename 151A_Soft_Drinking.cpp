#include<iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k * l;
    int lime = c * d;
    int toast = drink / nl;
    int salt = p / np;
    int result = min(toast, min(lime, salt)) / n;
    cout << result;
    return 0;
}