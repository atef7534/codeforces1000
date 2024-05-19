#include <iostream>
#include <string>
#include <vector>

using namespace std;
void solve();


int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    solve();
  }
  return 0;
}

void solve()
{
  int size; cin >> size;
  string s; cin >> s;

  vector<int> v(26, 0);
  int balloons = 0;

  for (auto &c: s)
  {
    if (!v[(int)(c - 'A')])
    {
      balloons += 2;
    }
    else
    {
      balloons++;
    }
    v[(int)( c- 'A')] = 1;
  }

  cout << balloons << "\n";
  return;
};
