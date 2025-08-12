#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,result;
    result = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==s[i+1])
        {
            result++;
        }
    }
    cout << result;
}