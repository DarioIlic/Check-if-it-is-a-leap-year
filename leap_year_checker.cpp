#include <iostream>

int main() {
  int year;
  std::cout << "Please enter year: ";
  std::cin >> year;
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << "It is a leap year\n";
  }
  else {
    std::cout << "It is not a leap year\n";
  }
