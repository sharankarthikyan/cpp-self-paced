#include <iostream>

int addNNaturalNumbers(int n) { // tail recursion
  if (n == 1) {
    return 1;
  }
  return n + addNNaturalNumbers(n - 1);
}

int addNNaturalNumbers2(int n) { // head recursion
  if (n == 1) {
    return 1;
  }
  return addNNaturalNumbers2(n - 1) + n;
}

int addNNaturalNumbers3(int n) { // storing return value in one local variable
                                 // and using it in returning phase.
  if (n == 1) {
    return 1;
  }

  int m = addNNaturalNumbers3(n - 1);
  return m + n;
}

int main() {
  int n;
  std::cout << "Enter N: ";
  std::cin >> n;
  std::cout << addNNaturalNumbers3(n);
  return 0;
}