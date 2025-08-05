#include<iostream>
using namespace std;
int main()
{ 
    string s;
    int result=1;
    cin>>s;
    sort(s.begin(), s.end());
    char elem = s[0];
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != elem)
        {
             elem = s[i];
             result++;
        }
    }

    if(result % 2 == 0)
    {
    cout<<"CHAT WITH HER!";
    }
    else
    {
    cout<<"IGNORE HIM!";
    }
    
 }