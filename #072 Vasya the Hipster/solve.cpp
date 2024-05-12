#include <algorithm>
#include <iostream>

using namespace std;

int main(void)
{
  int a, b; cin >> a >> b;
  cout << min(a, b) << " " << abs(a - b) / 2 << "\n";

  return 0;
}