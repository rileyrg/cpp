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
     }

     complex & operator*=(complex);
     complex & operator/=(complex);

};

complex operator+(complex a, complex b) { return a+=b;}
complex operator-(complex a, complex b) { return a-=b;}
complex operator-(complex a) { return { - a.real(), - a.img()};}

complex operator*(complex a, complex b) { return {a.real()*b.real()-(a.img()*b.img()),a.img()*b.real()+a.real()*b.img()};}

// complex operator/(complex a, complex b) { return a/=b;}

// interesting cant be method as implicit first param is self.
// https://stackoverflow.com/a/13554338/37370
bool operator==(complex a, complex b) {
  return a.real() == b.real() && a.img() == b.img();
}
bool operator!=(complex a, complex b) { return !(a == b); }

void f(complex z){
     complex a(2,3);
     complex b{4,5};
     complex c{a*b};
     complex d{c+z*complex{1,2.3}};
}
int main(){
     complex z={1,0};
     const complex cz{1,3}; // dbg_1
debug_complex_add:
     z+=cz;
     double d = z.real();
     f(z);
}
