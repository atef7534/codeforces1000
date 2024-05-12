#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> v(4);
  for (int i = 0; i < 4; i++)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int abc = v.back();

  int one = abc - v[0];
  int two = abc - v[1];
  int three = abc - v[2];

  cout << one << " " << two << " " << three << "\n";

  return 0;
}