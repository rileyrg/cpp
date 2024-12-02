#include <cstdio>
#include <iostream>

class Dog {
  int age;
  std::string name;

public:
  Dog() {
    age = 3;
    name = "dummy";
  }
  void setAge(int &a) { age = a; }
};

int main() {
  Dog d;
  int i = 9;
  d.setAge(i);
  std::cout << i << std::endl;
}
