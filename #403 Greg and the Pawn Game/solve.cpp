#include <iostream>
#include <string>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int sz;
    std::cin >> sz;

    std::string str1, str2;
    std::cin >> str1 >> str2;

    int cnt = 0;
    for (int itr = sz - 1; itr > 0; itr--)
    {
      if (str2[itr] == '1')
      {
        if (itr != sz - 1 && str1[itr + 1] == '1')
        {
          str1[itr + 1] = 'F';
          cnt++;
        }
        else if (str1[itr] == '0')
        {
          str1[itr] = 'F';
          cnt++;
        }
        else if (str1[itr - 1] == '1')
        {
          str1[itr - 1] = 'F';
          cnt++;
        }
      }
    }
    if (str2[0] == '1')
    {
      if (str1[0] == '0')
      {
        str1[0] = 'F';
        ++cnt;
      }
      else if (str1[1] == '1')
      {
        str1[1] = 'F';
        ++cnt;
      }
    }
    std::cout << cnt << '\n';
  }
  return 0;
}