#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >>x ;
        sum += x;
    }
    double result = (double)sum / n;
    cout << fixed << setprecision(12) << result;
}