#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool seen[26] = {0};
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
            seen[c - 'a'] = true;
    }
    int count = 0;
    for (int i = 0; i < 26; ++i)
        if (seen[i])
            count++;
    cout << count << endl;
    return 0;
}