#include <cstdlib>
#include <iostream>
#include <string>

class complex
{
private:
     double re,im;
public:
     complex(double r, double i): re{r},im{i}{}
     complex(double r): re{r},im{0}{}
     complex(): re{0},im{0}{}

     double real() const {return re;}
     void real(double d) {re=d;}
     double img() const {return im;}
     void img(double i) {im=i;}

     complex & operator+=(complex z){
          re+=z.re;
          im+=z.im;
          return *this;
     }
     complex & operator-=(complex z){
          re-=z.re;
          im-=z.im;
          return *this;
     }};

int main(){
     complex z={1,0};
     const complex cz{1,3}; // dbg_1
debug_complex_add:
     z+=cz;
}
