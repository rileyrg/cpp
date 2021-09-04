#include <cstdio>
#include <cstdlib>

int  heap(int v){
     int* p = new int;
     *p=v;
     int r = *p+8;
     delete p;
     return r;
}

int stack(int z){
     int a,b;
     a=z;
     b=2;
     int r = a+b;
     return r;
}


int main() {
     int v = 0x88;
     int r = stack(v);
     heap(r);
     return EXIT_SUCCESS;
}
