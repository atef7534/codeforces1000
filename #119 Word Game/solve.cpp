#include <iostream>
#include <map>
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
  map<string, int> freqs;
  int size; cin >> size;

  vector<string> v1(size), v2(size), v3(size);
  for (int i = 0; i < size; i++)
  {
    cin >> v1[i];
    freqs[v1[i]]++;
  }
  for (int i = 0; i < size; i++)
  {
    cin >> v2[i];
    freqs[v2[i]]++;
  }
  for (int i = 0; i < size; i++)
  {
    cin >> v3[i];
    freqs[v3[i]]++;
  }

  int p1 = 0, p2 = 0, p3 = 0;
  for (int i = 0; i < size; i++)
  {
    if (freqs[v1[i]] == 1)
    {
      p1 += 3;
    }
    else if (freqs[v1[i]] == 2)
    {
      p1++;
    }
    if (freqs[v2[i]] == 1)
    {
      p2 += 3;
    }
    else if (freqs[v2[i]] == 2)
    {
      p2++;
    }
    if (freqs[v3[i]] == 1)
    {
      p3 += 3;
    }
    else if (freqs[v3[i]] == 2)
    {
      p3++;
    }
  }

  cout << p1 << " " << p2 << " " << p3 << "\n";
  return;
}