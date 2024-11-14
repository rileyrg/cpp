#include <cstdio>
#include <iostream>

int main() {
  const int i = 9;
  // i = 6;

  const int *p1 = &i; // data is const , pointer is not
  p1++;

  int *const p2 = nullptr; // pointer is const, data is not.

  const int *const p3 = nullptr; // data and pointer both const
}
