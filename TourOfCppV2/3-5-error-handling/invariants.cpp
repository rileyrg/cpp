#include <cstdlib>
#include <exception>
#include <iostream>
#include <new>

class Vector {
private:
  double *elem;
  int sz;

public:
  Vector(int s) {
    if (s < 0) {
      throw std::length_error{"Vector constructor : negative size"};
    }
    this->elem = new double[s];
    this->sz = s;
  }

  double &operator[](int i) {

    if (i < 0 || i >= this->size())
      throw std::out_of_range{"index out of range"};
    return this->elem[i];
  }

  int size() { return sz; }
};

int main() {
  Vector vector(-1);
  return EXIT_SUCCESS;
}
