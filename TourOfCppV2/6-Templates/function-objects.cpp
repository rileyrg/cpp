#include <iostream>

template <typename T>
class LessThan
{
     const T val;
public:
     LessThan(const T&v): val{v}{};
     bool operator()(const T& v) const { return v<val;}
};

int main(void) {
     std::cout <<  (LessThan<int>{2}(1)?"True":"False") << std::endl  ;
     std::cout <<  (LessThan<int>{10}(11)?"True":"False") << std::endl  ;
     return EXIT_SUCCESS;
}
