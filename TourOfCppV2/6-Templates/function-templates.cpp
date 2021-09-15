#include <vector>
#include <list>
#include <complex>

template <typename Sequence,typename Value>
Value Sum(const Sequence& s, Value v)
{
     for(auto x:s)
          v+=x;

     return v;
}

int main(void) {

     std::vector<int> vi{1,2,3,4};
     std::vector<std::complex<double>> vc{{1,2},{3,4}};
     std::list<double> ld{1.1,1.2,1.3};

     double di = Sum(vi,0);
     double dd = Sum(ld,0.0);

     auto cc = Sum(vc,std::complex<double>{0,0});

     return 0;
}
