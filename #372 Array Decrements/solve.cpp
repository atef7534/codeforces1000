#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

void solve();


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
  int size;
  std::cin >> size;

  std::vector<int> a(size),
                    b(size);
  
  for (int itr = 0; itr < size; itr++)
    std::cin >> a.at(itr);
  
  int minD = std::numeric_limits<int>::max();
  bool can = true;
  for (int itr = 0; itr < size; itr++)
  {
    std::cin >> b.at(itr);
    if (!b.at(itr)) 
      continue;
    
    can &= (a.at(itr) >= b.at(itr));
    minD = std::abs(a.at(itr) - b.at(itr));
  }
  if (!can)
    return void(std::cout << "NO\n");
  
  for (int itr = 0; itr < size; itr++)
  {
    if (std::max(0, a.at(itr) - minD) != b.at(itr))
      return void(std::cout << "NO\n");
  }
  std::cout << "YES\n";
  return;
}