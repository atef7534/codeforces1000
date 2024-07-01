#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


std::vector<int> getLengthsOfString(std::string s);

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    std::string s;
    std::cin >> s;

    std::vector<int> lengths = getLengthsOfString(s);
    int score = 0;
    for (int itr = int(lengths.size()) - 1; itr >= 0; itr -= 2)
    {
      score += lengths.at(itr);
    }
    std::cout << score << '\n';
  }
  return 0;
}

std::vector<int> getLengthsOfString(std::string s)
{
  int length = int(s.size());
  std::vector<int> result;
  int count = 0;
  for (int itr = 0; itr < length; itr++)
  {
    if (s[itr] == '0')
    {
      if (!count)
        continue;
      result.push_back(count);
      count = 0;
    }
    else
    {
      count++;
    }
  }
  if (count)
    result.push_back(count);
  
  std::sort(result.begin(), result.end());
  return result;
}
