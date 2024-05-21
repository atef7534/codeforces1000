#include <iostream>
#include <vector>

using namespace std;
void solve();
bool valid(int a, int b, int c, int d, int e, int f);

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
  vector<int> v(size);

  for (auto &i: v)
  {
    cin >> i;
  }

  vector<vector<int>> cont;
  for (int i = 0; i < size - 2; i++)
  {
    cont.push_back({v[i], v[i + 1], v[i + 2]});
  }
  
  int count = 0;
  for (int i = 0, n = cont.size(); i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (valid(cont[i][0], cont[i][1], cont[i][2], cont[j][0], cont[j][1], cont[j][2]))
      {
        count++;
      }
    }
  }

  cout << count << "\n";
  return;
}


bool valid(int a, int b, int c, int d, int e, int f)
{
  if ((a != d && b == e && c == f) || (a == d && b != e && c == f) || (a == d && b == e && c != f))
  {
    return true;
  }
  return false;
}