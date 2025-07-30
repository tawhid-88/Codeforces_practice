#include<iostream>
using namespace std;
int main()
{
    int result=0;
    int x[5][5];
    for(int i =1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>x[i][j];
        }
    }
    for(int i= 1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(x[i][j]==1)
            {
                result = abs(i-3)+ abs (j-3);
            }
        
        }
    }

    cout<<result;
}
