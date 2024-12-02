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

  // const return value
  const std::string &getName() { return name; }

  // const functions - no member variables changed
  void printDogName() const { std::cout << name << "const" << std::endl; }
  // non const version is a different version
  void printDogName() { std::cout << getName() << "non const" << std::endl; }
};

int main() {
  Dog d;
  d.printDogName();
  const Dog d2;
  d2.printDogName();
}
