#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <class it>
  it getmax( it f, it l )
{
  if (f == l)
  {
    return l;
  }

  it large = f;
  while (++f != l)
  {
    if (*large < *f)
    {
      large = f;
    }
  }

  return large;
}


int main(void)
{
  int size; cin >> size;

  vector<int> v(size);
  for (int i = 0; i < size; i++)
  {
    cin >> v[i];
  }

  int mx = *getmax(v.begin(), v.end());
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans += (mx - v[i]);
  }

  cout << ans << "\n";

  return 0;
}