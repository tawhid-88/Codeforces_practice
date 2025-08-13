#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s; 

    for (int i = 0; i < (int)s.length(); i++)
    {
        int digit = s[i] - '0';
        int inverted = 9 - digit;

        if (i == 0 && inverted == 0)
            continue;

        if (inverted < digit)
        {
            s[i] = inverted + '0';
        }
    }

    cout << s;
    return 0;
}
