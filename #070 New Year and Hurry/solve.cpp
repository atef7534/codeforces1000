#include <iostream>

using namespace std;

int main(void)
{
  int n, k; cin >> n >> k;

  int minutes = 240 - k;

  int c = 0, i = 1;
  while (i <= n && c + i * 5 <= minutes)
  {
    c += i * 5;
    i++;
  }

  cout << i - 1 << "\n";
  return 0;
}