#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string word = "";
    bool first = true;
    int i = 0;
    while (i < s.length())
    {
        if (i + 2 < s.length() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (!word.empty())
            {
                if (!first)
                    cout << " ";
                cout << word;
                word = "";
                first = false;
            }
            i += 3;
        }
        else
        {
            word += s[i];
            i++;
        }
    }
    if (!word.empty())
    {
        if (!first)
            cout << " ";
        cout << word;
    }
    cout << endl;
    return 0;
}