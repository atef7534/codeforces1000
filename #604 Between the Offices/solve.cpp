/*
  author: atef_ai
  created: 19 Jul 2024
  problem: Between the Offices
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main(void)
{
  int size;
  std::cin >> size;
  std::string s;
  std::cin >> s;
  std::vector<char> a;
  a.push_back(s[0]);
  for (int itr = 1; itr < size; itr++)
  {
    if (s[itr] != a.back())
    {
      a.push_back(s[itr]);
    }
  }
  a.push_back(a.back());
  int S = 0, F = 0;
  for (int itr = 0; itr < (int)a.size() - 1; itr++)
  {
    if (a[itr] != a[itr + 1])
    {
      S += (a[itr] == 'S');
      F += (a[itr] == 'F');
    }
  }
  std::cout << (S > F ? "YES\n" : "NO\n");
  return 0;
}