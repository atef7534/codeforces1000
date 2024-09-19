#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  while (m--) {
    int l, r;
    char c, cc;
    cin >> l >> r >> c >> cc;
    for (int i = l - 1; i < r; i++)
      if (s[i] == c) s[i] = cc;
  }
  cout << s << '\n';
  return 0;
}
