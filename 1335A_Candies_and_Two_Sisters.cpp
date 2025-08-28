#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    if (n <= 2) {
      cout << 0 << endl;
    }
    else {
      int result = (n - 1) / 2;
      cout << result << endl;
    }
  }
}