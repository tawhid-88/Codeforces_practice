#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int fashionable = min(a, b);
    int same_color = (max(a, b) - fashionable) / 2;
    cout << fashionable << " " << same_color << endl;
    return 0;
}