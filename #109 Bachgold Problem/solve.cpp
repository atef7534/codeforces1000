#include <iostream>


using namespace std;
void solve();

int main(void)
{
  solve();
  return 0;
}

void solve()
{
  int n; cin >> n;
  if (n & 1)
  {
    if (n == 3)
    {
      cout << "1\n3\n";
      return;
    }
    cout << n / 2 << "\n";
    cout << 3 << " ";
    n -= 3;
    while (n > 2)
    {
      cout << 2 << " ";
      n -= 2;
    }
    cout << 2 << "\n";
  }
  else
  {
    cout << n / 2 << "\n";
    for (int i = 0; i < n / 2 - 1; i++)
    {
      cout << 2 << " ";
    }
    cout << 2 << "\n";
  }
}