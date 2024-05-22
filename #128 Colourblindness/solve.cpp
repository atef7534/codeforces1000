#include <iostream>
#include <string>


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
  int n; cin >> n;

  string s1, s2; 
  cin >> s1 >> s2;

  for (int i = 0; i < n; i++)
  {
    s1[i] = (s1[i] == 'B') ? 'G' : s1[i];
    s2[i] = (s2[i] == 'B') ? 'G' : s2[i];
  }

  if (!s1.compare(s2))
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
  return;
}