#include <algorithm>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;


void solve();

int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    solve();
  }
  return 0;
}

void solve()
{
  int sizeN, sizeM;
  cin >> sizeN >> sizeM;

  vector<vector<int>> nums(sizeN + 2, vector<int>(sizeM + 2, 0));
  for (int itr = 1; itr <= sizeN; itr++)
    for (int itrj = 1; itrj <= sizeM; itrj++)
      cin >> nums.at(itr).at(itrj);
  
  for (int itr = 1; itr <= sizeN; itr++)
  {
    for (int itrj = 1; itrj <= sizeM; itrj++)
    {
      vector<int> tmp(5, 0);
      tmp.at(0) = nums.at(itr).at(itrj);
      tmp.at(1) = nums.at(itr).at(itrj + 1);
      tmp.at(2) = nums.at(itr).at(itrj - 1);
      tmp.at(3) = nums.at(itr - 1).at(itrj);
      tmp.at(4) = nums.at(itr + 1).at(itrj);

      std::sort(tmp.begin(), tmp.end());
      if (tmp.back() > nums.at(itr).at(itrj))
        continue;
      nums.at(itr).at(itrj) = tmp.at(3);
    }
  }

  for (int itr = 1; itr <= sizeN; itr++)
  {
    for (int itrj = 1; itrj <= sizeM; itrj++)
      std::cout << nums.at(itr).at(itrj) << ' ';
    std::cout << '\n';
  }
  return;
}
