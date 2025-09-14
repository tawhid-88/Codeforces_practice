#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int x=0;
        cin >> x;
        cout << "Division ";
        if(x<=1399)
        {
            cout << "4"<<endl;
        }
        else if (x>=1400 &&  x<= 1599)
        {
            cout << "3"<<endl;
        }
        else if (x >= 1600 && x <= 1899)
        {
            cout << "2"<<endl;
        }
        else if (x >= 1900)
        {
            cout << "1"<<endl;
        }
    }
}