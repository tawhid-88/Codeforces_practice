#include <iostream>
using namespace std;

int main()
{
    int n, amazing = 0;
    cin >> n;
    int score, best, worst;
    cin >> score;
    best = worst = score;
    for (int i = 1; i < n; ++i)
    {
        cin >> score;
        if (score > best)
        {
            amazing++;
            best = score;
        }
        else if (score < worst)
        {
            amazing++;
            worst = score;
        }
    }
    cout << amazing;
    return 0;
}
