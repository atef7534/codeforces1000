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
  std::string str;
  std::cin >> str;

  std::vector<int> freqs(26, 0);
  for (int itr = 0; str[itr] != '\0'; itr++)
    ++freqs.at(int(str[itr] - 'a'));

  for (int itr = 0; itr < 26; itr++)
    for (int itrj = 0; itrj < freqs.at(itr); itrj++)
      std::cout << char(itr + 'a');

  for (int itr = 25; itr >= 0; itr--)
    for (int itrj = 0; itrj < freqs.at(itr); itrj++)
      std::cout << char(itr + 'a');
  
  std::cout << '\n';
  return;
}