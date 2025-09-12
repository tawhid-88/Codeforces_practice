#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int card[1000];
    for (int i = 0; i < n; ++i)
        cin >> card[i];
    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; 

    while (l <= r)
    {
        int pick;
        if (card[l] > card[r])
        {
            pick = card[l++];
        }
        else
        {
            pick = card[r--];
        }
        if (turn)
            sereja += pick;
        else
            dima += pick;
        turn = !turn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}