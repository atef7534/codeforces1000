/*
  author: atef_ai
  date: 14 Jul 2024
  problem: A. Hotelier
*/
#include <iostream>
#include <string>
int main(void)
{
  int size;
  std::cin >> size;
  std::string str, res(10, '0');
  std::cin >> str;
  for (int itr = 0; itr < size; itr++)
  {
    if (str[itr] == 'L')
    {
      for (int itrj = 0; itrj < 10; itrj++)
      {
        if (res[itrj] == '0')
        {
          res[itrj] = '1';
          break;
        }
      }
    }
    else if (str[itr] == 'R')
    {
      for (int itrj = 9; itrj >= 0; itrj--)
      {
        if (res[itrj] == '0')
        {
          res[itrj] = '1';
          break;
        }
      }
    }
    else
    {
      int index = (str[itr] - '0');
      res[index] = '0';
    }
  }
  std::cout << res << '\n';
  return 0;
}