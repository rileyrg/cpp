//  https://www.youtube.com/watch?v=0AuPWXuBmyo

#include <iostream>

class Base{
public:
     virtual void f() {} //forces vtable
};

class Derived1 : public Base {
     int someData = 11111;
public:
     void derived1Function() {
          std::cout <<  "Derived1::derived1Function(): someData=" << someData << ";" << std::endl  ;
     };
};

class Derived2 : public  Base {
     int otherData = 3333;
};

int main() {
     Base * pb = new Derived2();
     Derived1 * pd1 = static_cast<Derived1*>(pb);
     pd1->derived1Function();
debug_dynamic_cast:
     pb = new Derived1();
     pd1 = dynamic_cast<Derived1*>(pb);
     if(pd1)
          pd1->derived1Function();
     else
          std::cout <<  "no derived function!" << std::endl  ;
     pb = new Derived2();
     pd1 = dynamic_cast<Derived1*>(pb);
     if(pd1)
          pd1->derived1Function();
     else
          std::cout <<  "no derived function!" << std::endl  ;

     delete pb;
}
