#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int n; cin >> n;
  if (n <= 10) { cout << "0\n"; return 0; }
  n -= 10;
  if (n < 10) cout << "4\n";
  else if (n == 10) cout << "15\n";
  else if (n == 11) cout << "4\n";
  else cout << "0\n";
  return 0;
}
