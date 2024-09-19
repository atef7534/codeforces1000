#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  string s, vowels = "aeiou"; cin >> s;
  vector<int> freqs(26, 0);
  int res = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if ('a' <= s[i] && s[i] <= 'z') {
      if (vowels.find(s[i]) != string::npos) res++;
      continue; 
    }
    if (stoi(s.substr(i, 1)) & 1) ++res;
  }
  cout << res << '\n';
  return 0;
}
