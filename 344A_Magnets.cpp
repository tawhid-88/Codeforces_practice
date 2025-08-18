#include <iostream>
#include <string>

int main()
{
    using namespace std;

    int n;
    cin >> n;

    int groups = 0;
    string prv = ""; 

    
    for (int i = 0; i < n; ++i)
    {
        string next;
        cin >> next; 

        
        if (next != prv)
        {
            groups++;
        }

        
        prv = next;
    }

    cout << groups << endl;

    return 0;
}