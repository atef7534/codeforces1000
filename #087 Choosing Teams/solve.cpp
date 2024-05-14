#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int size, k, c = 0; cin >> size >> k;

  while (size--)
  {
    int x; cin >> x;
    c += (x < k);
  }

  cout << c / 3 << "\n";
  return 0;
}