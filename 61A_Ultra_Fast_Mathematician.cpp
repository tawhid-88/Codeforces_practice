#include<iostream>
using namespace std;
int main()
{
    string n1, n2,n3;
    cin >> n1 >> n2;
    n3 = n1;
    for (int i = 0; i < n1.length(); i++)
    {
        if(n1[i]==n2[i])
        {
            n3[i] ='0';
        }
        else{
            n3[i] ='1';
        }
    }
    for (int i = 0; i < n1.length(); i++)
    {
        cout << n3[i];
    }
}