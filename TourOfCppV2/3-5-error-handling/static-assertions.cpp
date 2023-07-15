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
    // change 4 to 8 in the editor if using an lsp and... magic
    static_assert(sizeof(int) >= 4,
                  "Integers are too small. Aborting via a static_assert.");
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
  Vector v = Vector(5);
  ;
  v[2] = 2.0;
  v[11] = 3.0;
  std::cout << "Done!" << std::endl;
  return EXIT_SUCCESS;
}
