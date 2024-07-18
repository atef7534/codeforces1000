/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Roma and Lucky Numbers
*/
#include <iostream>
#include <string>
int main(void)
{
  int size, k;
  std::cin >> size >> k;
  int total = 0;
  for (int itr = 0; itr < size; itr++)
  {
    std::string tmp;
    std::cin >> tmp;
    int cnt = 0;
    for (int itrj = 0; tmp[itrj] != '\0'; itrj++)
    {
      cnt += (tmp[itrj] == '4' || tmp[itrj] == '7');
    }
    total += (cnt <= k);
  }
  std::cout << total << '\n';
  return 0;
}