#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int max = a[0], maxId = 0;
    int min = a[0], minId = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxId = i;
        }
        if (a[i] <= min)
        {
            min = a[i];
            minId = i;
        }
    }

    int swaps = maxId + (n - 1 - minId);
    if (maxId > minId)
        swaps--;
    cout << swaps << endl;
    return 0;
}