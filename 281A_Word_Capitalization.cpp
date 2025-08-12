#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string input;
    cin>> input;
    if(input[0]>96)
    {
        input[0] -= 32;
    }
    cout << input;

    return 0;
}