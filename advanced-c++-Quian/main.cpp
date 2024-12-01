#include <cstdio>

int main() {
  const int i = 9;
  // i = 6;

  const_cast<int &>(i) = 6;

  int j = 3;
  static_cast<const int &>(j) = 7;
}
