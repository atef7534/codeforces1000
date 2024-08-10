#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int f1(int a, int b, int f, int g, int h);
int f2(int a, int b, int f, int g, int h, int d);
int f3(int a, int b, int f, int g, int h);
int f4(int a, int b, int f, int g, int h, int w);

int main(void) {
  int t; cin >> t;
  while (t--) {
    int w, d, h;
    cin >> w >> d >> h;
    int a, b, f, g;
    cin >> a >> b >> f >> g;
    cout << min({f1(a, b, f, g, h), f2(a, b, f, g, h, d), f3(a, b, f, g, h), f4(a, b, f, g, h, w)}) << '\n';
  }
  return 0;
}
int f1(int a, int b, int f, int g, int h) {
  return b + abs(a - f) + h + g;
}
int f2(int a, int b, int f, int g, int h, int d) {
  return abs(d - b) + abs(a - f) + h + abs(d - g);
}
int f3(int a, int b, int f, int g, int h) {
  return a + abs(b - g) + h + f;
}
int f4(int a, int b, int f, int g, int h, int w) {
  return abs(w - a) + abs(b - g) + h + abs(w - f);
}