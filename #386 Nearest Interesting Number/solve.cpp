#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <vector>


void solve();
bool getSum(int a);

int main()
{
    int tests = 1;
    while (tests--)
      solve();
    return 0;
}


void solve()
{
  int a;
  std::cin >> a;

  while (!getSum(a))
    a++;
  
  std::cout << a << '\n';
  return;
}

bool getSum(int a)
{
  int sum = 0;
  while (a)
    sum += (a % 10),
    a /= 10;
  
  return (sum % 4 == 0);
}