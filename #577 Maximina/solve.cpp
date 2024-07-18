/*
  author: atef_ai
  created: 16 Jul 2024
  problem: Maximina
*/
#include <iostream>
#include <vector>
int more_than_one(std::vector<int>& a, int size);
bool found_one(std::vector<int>& a, int size);
bool found_zero(std::vector<int>& a, int size);
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
    {
      std::cin >> a.at(itr);
    }
    if (!found_one(a, n))
    {
      std::cout << "NO\n";
      continue;
    }
    if (!found_zero(a, n))
    {
      std::cout << "YES\n";
      continue;
    }
    if (n - more_than_one(a, n) < k)
    {
      std::cout << "NO\n";
    }
    else
    {
      std::cout << "YES\n";
    }
  }
  return 0;
}
/*
  1 found
  0 found
*/
int more_than_one(std::vector<int>& a, int size)
{
  int cnt = 0;
  for (int itr = 0; itr < size; itr++)
  {
    cnt += (a.at(itr) > 1);
  }
  return cnt;
}
bool found_one(std::vector<int>& a, int size)
{
  bool found = false;
  for (int itr = 0; itr < size; itr++)
  {
    found |= (!(a.at(itr) - 1));
  }
  return found;
}
bool found_zero(std::vector<int>& a, int size)
{
  bool found = false;
  for (int itr = 0; itr < size; itr++)
  {
    found |= (!(a.at(itr)));
  }
  return found;
}