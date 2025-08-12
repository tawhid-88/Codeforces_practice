#include<iostream>
using namespace std;
int main()
{
    int n,countb,counta,total;
    cin >> n;
    counta = 0;
    countb = 0;
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='4')
        {
            counta++;
        }
        else if (s[i] == '7')
        {
            countb++;
        }
        
    }
    total = counta + countb;

    if (counta >= 1 && countb >= 1 && total<=s.length()||counta==4||countb==7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}