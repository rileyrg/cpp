#include <cstdlib>
#include <iostream>

#include "vector.h"

Vector::Vector(const Vector& a)
     :elem{new double[a.sz]},sz{a.sz}{
     for(int i=0;i!=sz;i++){
          elem[i]=a.elem[i];
     }
}

Vector& Vector::operator= (const Vector& a){
     delete [] elem;
     elem = new double[a.sz];
     sz=a.sz;
     for(int i=0; i!=a.sz;i++)
          elem[i]=a.elem[i];
     return *this;
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
