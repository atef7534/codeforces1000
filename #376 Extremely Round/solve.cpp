#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

void solve();
std::vector<int> getFreqs(std::string str);


int main()
{
    int tests;
    std::cin >> tests;
    while (tests--)
      solve();
    return 0;
}


void solve()
{
  int num;
  std::cin >> num;

  int mod = 1, total = 0;
  for (mod = 1; mod * 10 <= num; mod *= 10)
    total += 9;
  
  std::cout << total + num / mod << '\n';
  return;
}