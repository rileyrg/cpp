class Vector{
public:

     Vector(int s): elem{new double[s]},sz{s}{};
     ~Vector(){delete [] elem;}

     Vector(const Vector & a); // copy constructor
     Vector &operator= (const Vector & a); // copy assignment

     Vector(Vector && a); // move constructor
     Vector &operator= (Vector && a); // move assignment

     double &operator[] (const int i) const {return elem[i];}

     int size() const { return sz;}

private:
     double *elem;
     int sz;
};
