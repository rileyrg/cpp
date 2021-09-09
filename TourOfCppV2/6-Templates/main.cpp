#include <functional>
#include <iostream>
#include <new>
#include <ostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Vector {
private:
     T* elem;
     int sz;
public:
     explicit Vector(int s);
     ~Vector() {delete[] elem;}
     // copy and move TODO
     Vector(const Vector<T>& a); // copy constructor
     Vector(Vector<T> && a); // move constructor
     Vector<T>& operator= (const Vector<T>& a); // copy assignment
     Vector<T>& operator= (Vector<T>&& a); // move  assignment
     Vector<T> operator+ (const Vector<T>& a);
     T &operator[](int i);
     const T &operator[](int i)const;
     int size()const{return sz;}
};

template<typename T>
Vector<T>::Vector(int s){
     if (s<0)
          throw std::invalid_argument("negative");
     elem=new T[sz=s];
}

template<typename T>
Vector<T>::Vector(const Vector& a) // copy constructor
     :elem{new T[a.sz]},sz{a.sz}{
     for(int i=0;i!=sz;i++){
          elem[i]=a.elem[i];
     }
};

template<typename T>
Vector<T>& Vector<T>::operator= (const Vector<T>& a){ // copy assignment
     delete [] elem;
     elem = new T[a.sz];
     sz=a.sz;
     for(int i=0; i!=a.sz;i++)
          elem[i]=a.elem[i];
     return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator= (Vector&& a){ // move  assignment
     delete [] elem; //move_vect
     elem = a.elem;
     sz=a.sz;
     a.elem=nullptr;
     a.sz=0;
     return *this;
}

template<typename T>
Vector<T> operator+ (const Vector<T>& a, const Vector<T>& b)
     {
          if(a.size()!=b.size())
               throw "Vector_size_mismatch{}";
          Vector<T> res(a.size());
          for(int i=0;i!=a.size();i++)
               res[i]=a[i]+b[i];
          return res;
     }

template<typename T>
const T & Vector<T>::operator[](int i)const{
     if (i<0||i>size())
          throw std::invalid_argument("index out of range");
     return elem[i];
}
template<typename T>
T & Vector<T>::operator[](int i){
     if (i<0||i>size()-1)
          throw std::invalid_argument("index out of range");
     return elem[i];
}

template<typename T>
Vector<T>::Vector(Vector<T> && a) // move constructor
     :elem{a.elem},sz{a.sz}{
     a.elem=nullptr;
     a.sz=0;
}

template<typename T>
Vector<T> moveVectorAfterAdd(const Vector<T> &  v1, const Vector<T> & v2){
     Vector<T> r =   v1+v2;
     // return std::move(r);
     return r;
}

int main(void) {
     Vector<double> v1(1);
     Vector<double> v2=v1;
     Vector<double> v3=v2;

     Vector<double> v4=moveVectorAfterAdd(v1,v2);

     return 0;
}
