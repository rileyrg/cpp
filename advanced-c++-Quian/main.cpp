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
  // void setAge(const int a) { age = a; }
  void setAge(int a) { age = a; }

  const std::string &getName() { return name; }
};

int main() {
  Dog d;
  int i = 9;
  d.setAge(i);
  std::cout << i << std::endl;
  const std::string &name = d.getName();
  std::cout << name << std::endl;
}
