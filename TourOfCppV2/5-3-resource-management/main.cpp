#include <iostream>
#include <new>
#include <vector>

std::vector<int> moveVector(int const n) {
  std::vector<int> v(n);
  for (std::vector<int>::size_type i = 0; i != v.size(); i++) {
       v[i]=i;;
  }
  // std::cout <<  "Vector size: " << v.size() << std::endl ;
move_vector:
  std::vector<int>  r  = std::move(v);
move_vector_return:
  return r;
}
std::vector<int> moveVector2(int const n) {
  std::vector<int> v(n);
  for (std::vector<int>::size_type i = 0; i != v.size(); i++) {
       v[i]=i+100;;
  }
  return v;
}

int main(void) {
  std::vector<int> v = moveVector(2);
  v = moveVector2(2);
  return 0;
}
