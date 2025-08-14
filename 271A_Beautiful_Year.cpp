#include<iostream>
using namespace std;
int main()
{
    int y, a, b, c, d;
    cin >> y;
    
    while(y>0)
    {
        y++;
        a = y % 10;
        b = (y / 10) % 10;
        c = (y / 100) % 10;
        d = (y / 1000) % 10;

        if (a != b && a != c && a != d && d != c && d != b && c != b)
        {
            break;
        }
    }
    cout << y;
}