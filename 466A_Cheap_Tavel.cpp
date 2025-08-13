#include<iostream>
using namespace std;
int main()
{
    int n, m, a, b;
    int fare = 0;
    cin >> n >> m >> a >> b;
    if(n%m!=0)
    {
        
        fare = min(((n % m) * a) + ((n / m) * b), ((n / m) + 1) * b);
    }
    else if(n%m==0)
    {
        fare = (n/m)*b;
    }
    fare = min(fare, n * a);
    cout << fare;
}