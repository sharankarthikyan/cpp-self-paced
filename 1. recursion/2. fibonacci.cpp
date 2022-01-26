// Fibinacci sum

#include <iostream>

int fibonacci1(int n) {
  int sum = 0;
  if (n == 0 || n == 1) {
    return n;
  }

  sum += fibonacci1(n - 1) + fibonacci1(n - 2);
  return sum;
}

int main() {
  int n;
  std::cout << "Enter N:";
  std::cin >> n;
  std::cout << fibonacci1(n);
  return 0;
}