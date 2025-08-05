#include<iostream>
using namespace std;
int main()
{
    string T,s="";
    cin>>T;

    for(int i =0; i<T.size(); i++)
    {
        if(T[i]!='+')
        {
            s+=T[i];
        }
    }
    sort(s.begin(), s.end());

    cout<<s[0];
    for(int i=1; i<s.size(); i++)
    {
        cout<<'+'<<s[i];
    }
    
    cout<<endl;

}