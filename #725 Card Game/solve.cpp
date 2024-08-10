#include <iostream>
using namespace std;

int f(int a, int b);
int main(void) {
  int t; cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int cnt = 0;
    if (f(a, c) + f(b, d) > 0) ++cnt;
    if (f(a, d) + f(b, c) > 0) ++cnt;
    std::cout << cnt * 2 << '\n'; 
  }
  return 0;
}
int f(int a, int b) {
  if (a > b) return 1;
  if (a == b) return 0;
  if (a < b) return -1;
}