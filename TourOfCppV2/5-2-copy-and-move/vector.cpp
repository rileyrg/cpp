#include <cstdlib>
#include <iostream>

#include "vector.h"

Vector::Vector(const Vector& a) // copy constructor
     :elem{new double[a.sz]},sz{a.sz}{
     for(int i=0;i!=sz;i++){
          elem[i]=a.elem[i];
     }
};

Vector::Vector(Vector && a) // move constructor
     :elem{new double[a.sz]},sz{a.sz}{
     a.elem=nullptr;
     a.sz=0;
}

Vector& Vector::operator= (const Vector& a){ // copy assignment
     delete [] elem;
     elem = new double[a.sz];
     sz=a.sz;
     for(int i=0; i!=a.sz;i++)
          elem[i]=a.elem[i];
     return *this;
}

Vector& Vector::operator= (Vector&& a){ // move  assignment
     delete [] elem;
     elem = a.elem;
     sz=a.sz;
     a.elem=nullptr;
     a.sz=0;
     return *this;
}

Vector operator+ (const Vector& a, const Vector& b)
     {
          if(a.size()!=b.size())
               throw "Vector_size_mismatch{}";
          Vector res(a.size());
          for(int i=0;i!=a.size();i++)
               res[i]=a[i]+b[i];
          return res;
     }

// void bad_copy(Vector v1){
//      Vector v2=v1;
//      v1[0]=1;
//      v2[0]=2;
// }

void test_copy(){
     Vector v1(2);
     v1[0]=1;
     Vector v2=v1;
     v2[1]=2;
     Vector v3(v2);
     v3[1]=3;
addition:
     v1=v1+v2+v3;
illegal_access:
     v3[2]=3;
     v3 = v1;
}
int  main(){

     Vector vector(2);

     test_copy();
//     bad_copy(vector);


     std::cout << vector[0] << std::endl << vector[1] << std::endl;

     return EXIT_SUCCESS;
}
