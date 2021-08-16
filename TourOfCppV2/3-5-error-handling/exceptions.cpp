#include <cstdlib>
#include <exception>
#include <iostream>
#include <new>

class Vector{
private:
     double *elem;
     int sz;public:

     Vector(int s){
          this->elem= new double[s];
          this->sz=s;
     }

     double &operator[](int i){

          if(i<0 || i>=this->size())
               throw std::out_of_range{"index out of range"};
          return this->elem[i];
     }


     int size() { return sz;}
};

int  main(){

     try{
          auto pV = new Vector(3);
          Vector vector(2);
          int i = vector[-1];

     inspect_breakpoint_v2:
          Vector vector2 = Vector(-1);
     }catch (std::out_of_range &err){
          std::cerr <<   err.what() << std::endl  ;
     } catch(std::length_error){
     debug_inspect__length_error:
          std::cout <<  "Vector request out of range." << std::endl ;
          throw;
     }catch(std::bad_alloc){
          std::cout <<  "Yikes. Out of storage." << std::endl ;
          std::terminate();
     }


     return EXIT_SUCCESS;
}
