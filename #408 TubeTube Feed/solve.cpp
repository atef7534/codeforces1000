#include <iostream>
#include <vector>
#include <algorithm>


struct video 
{
  int a;
  int b;
};

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int sz, limit;
    std::cin >> sz >> limit;

    std::vector<video> array(sz);
    for (int itr = 0; itr < sz; itr++)
    {
      std::cin >> array.at(itr).a;
    }

    for (int itr = 0; itr < sz; itr++)
    {
      std::cin >> array.at(itr).b;
    }
    
    int score = -1;
    for (int itr = 0; itr < sz && limit; itr++)
    {
      if (array.at(itr).a > limit)
      {
        limit--;
        continue;
      }
      if (score == -1)
      {
        score = itr;
        limit--;
        continue;
      }
      score = (std::max(array.at(score).b, array.at(itr).b) != array.at(score).b) ? itr : score;
      limit--;
    }
    std::cout << (score + 1 ? score + 1: score) << '\n';
  }
  return 0;
}