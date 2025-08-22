#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int seen[26] = {0};
    for (char c : s)
    {
        c = tolower(c);
        seen[c - 'a'] = 1;
    }
    int total = 0;
    for (int i = 0; i < 26; ++i)
        total += seen[i];
    cout << (total == 26 ? "YES" : "NO") << endl;
    return 0;
}