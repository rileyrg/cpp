#include <iostream>
#include <new>
#include <ostream>
#include <vector>

std::vector<int> moveVector(int const n) {
  std::vector<int> v(n);
  for (std::vector<int>::size_type i = 0; i != v.size(); i++) {
       v[i]=i;
  }
  std::cout <<  "vector data address before return : " << v.data() << std::endl ;
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
  std::cout <<  "vector data address before assign : " << v.data() << std::endl ;
  std::vector<int> v2 = v;
  std::cout <<  "vector data address of newly assugned before return : " << v2.data() << std::endl ;
  return v2;
}
std::vector<int> moveVector3(int const n) {
  std::vector<int> v(n);
  for (std::vector<int>::size_type i = 0; i != v.size(); i++) {
       v[i]=i+100;;
  }
  std::cout <<  "vector data address before return : " << v.data() << std::endl ;
  return v;
}

int main(void) {
  std::vector<int> v = moveVector(2);
  std::cout <<  "Address of returned vector.data from moveVector is " << v.data() << std::endl;
  v = moveVector2(2);
  std::cout <<  "Address of returned vector.data from moveVector2 is " << v.data() << std::endl;
  v = moveVector3(2);
  std::cout <<  "Address of returned vector.data from moveVector3 is " << v.data() << std::endl;
  return 0;
}
