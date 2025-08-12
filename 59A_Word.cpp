#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int Ucount, Lcount;
    Ucount = 0;
    Lcount = 0;
    for (int i = 0; i < s.length();i++)
    {
        if (islower(s[i]))
        {
            Lcount += 1;
        }
        else if (isupper(s[i]))
        {
            Ucount += 1;
        }
    }
    if (Ucount > Lcount)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
}