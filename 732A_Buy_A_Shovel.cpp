#include <iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int shovels = 1;
    while (true)
    {
        int total = shovels * k;
        if (total % 10 == 0 || total % 10 == r)
        {
            cout << shovels << endl;
            break;
        }
        shovels++;
    }
    return 0;
}