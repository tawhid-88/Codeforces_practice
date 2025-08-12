#include<iostream>
using namespace std;
int main()
{
    int n,result;
    result = 0;
    cin >> n;
    for (int i = 0; i < n; )
    {
        result += 1;
        i += 5;
    }
    cout << result;
}