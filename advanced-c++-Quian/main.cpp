#include <cstdio>

int main() {
  const int i = 9;
  // i = 6;

  const int *p1 = &i; // data is const , pointer is not
  p1++;

  const int *const p2 = &i; // pointer is const, data is not. git test.

  const int *const p3 = nullptr; // data and pointer both const
}
