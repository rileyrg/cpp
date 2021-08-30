class Vector{
public:

     Vector(int s): elem{new double[s]},sz{s}{};
     ~Vector(){delete [] elem;}

     Vector(const Vector & a); // copy constructor
     Vector &operator= (const Vector & a); // copy assignment

     double &operator[](int i){return elem[i];}
     int size() { return sz;}
private:
     double *elem;
     int sz;
};
