/**
 * author: atef_ai
 * created: 25 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
bool isPrime(int number);
int main(void)
{
  int n;
  std::cin >> n;
  for (int itr = 1; itr <= 1000; itr++) {
    int tmp = n * itr + 1;
    if (!isPrime(tmp)) {
      std::cout << itr << '\n';
      break;
    }
  }
  return 0;
}
bool isPrime(int number) {
  for (int itr = 2; itr * itr <= number; itr++) {
    if (!(number % itr))
      return false;
  }
  return true;
}