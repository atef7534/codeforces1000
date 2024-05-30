#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;

void calcSubset(string A, int &c, string subset, int index)
{
  if (!subset.compare("QAQ"))
  {
    c++;
    return;
  }
  if (subset.size() >= 3) return;
  for (int i = index; i < A.size(); i++) {
      subset.push_back(A[i]);
      calcSubset(A, c, subset, i + 1);
      subset.pop_back();
  }
}


int main(void)
{
  int tt = 1;
  while (tt--)
  {
    std::string s; std::cin >> s;
    int c = 0;
    calcSubset(s, c, "", 0);
    std::cout << c << "\n";
  } 
  return 0;
}