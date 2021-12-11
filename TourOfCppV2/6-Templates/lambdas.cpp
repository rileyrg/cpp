#include <iostream>
#include <vector>

template <typename C, typename P>
int count(const C &c, P pred) {
     int cnt=0;
     for(const auto &x: c)
          if(pred(x))
               cnt++;
     return cnt;
}

int main(void) {
     int const x = 301;
     std::vector<int> v{100,200,300,400};
     std::cout <<  "number of values less than " << x << " is " << count(v, [](int a) {return a < x;}) << std::endl;
     return EXIT_SUCCESS;
}
