#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits>
using namespace std;
int f(char c);
int main(void) {
  int n, k; cin >> n >> k;
  string s; cin >> s;
  vector<int> freqs(26, 0);
  for (int i = 0; i < n; i++)
    freqs[f(s[i])]++;
  int res = 0;
  for (int i = 0; i < 26; i++) {
    int j = i, tmp = 0, r = numeric_limits<int>::max();
    string x = "";
    while (j < 26 && tmp < k) {
      if (freqs[j]) { 
        tmp++;
        r = min(r, freqs[j]);
      }
      ++j;
    }
    if (tmp < k) break;
    res = max(res, tmp * r);
  }
  cout << res << '\n';
  return 0;
}
int f(char c) {
  int index = (int) c - 'A';
  return index;
}