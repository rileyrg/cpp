#include <cstdlib>
#include <iostream>

class Vect6zuzor{
public:
     Vector(int s): Elem{new double[s]},sz{s}{}
     double &operator[](int i){return Elem[i];}
     int size() { return sz;}
private:
     double *Elem;
     int sz;
};

int  main(){

     Vector vector(2);

     std::cin >> vector[0];
     std::cin >> vector[1];

     std::cout << vector[0] << std::endl << vector[1] << std::endl;

     return EXIT_SUCCESS;
}
