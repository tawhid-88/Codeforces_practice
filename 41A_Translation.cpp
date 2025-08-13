#include<iostream>
using namespace std;
int main()
{
    string s, t;
    int count = 0;
    cin >> s;
    cin >> t;

    if(s.length()==t.length())
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]==t[t.length()-1-i])
            {
                count++;
            }
        }
    }
    if(count==s.length())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
