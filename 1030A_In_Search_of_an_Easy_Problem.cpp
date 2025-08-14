#include <iostream>
using namespace std;

int main()
{
    int n, easy, hard;
    easy = 0;
    hard = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            hard++;
        }
    }
    if(hard>0)
    {
        cout << "HARD";
    }
    else
        cout << "EASY";
    return 0;
}