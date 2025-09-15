#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int a=0, b=0, c=0, d=0, count = 0;
        cin >> a >> b >> c >> d;
        if (b > a)
            count++;
        if (c > a)
            count++;
        if (d > a)
            count++;
        cout << count << endl;
    }
    return 0;
}