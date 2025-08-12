#include<iostream>
using namespace std;
int main()
{
    int n,Anton,Danik;
    Anton = 0;
    Danik = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='A')
        {
            Anton += 1;
        }
        else if (s[i]=='D')
        {
            Danik += 1;
        }
    }
    if (Anton>Danik)
    {
        cout << "Anton";
    }
    else if (Danik>Anton)
    {
         cout << "Danik";
    }
    else if (Anton==Danik)
    {
        cout << "Friendship";
    }
}