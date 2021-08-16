#include <cstdlib>
#include <iostream>

/* really simple file to study lldb instruction stepping */

void  sayHello(std::string name){
     std::cout <<  "Hello, " << name << std::endl ;
}

int  main(){
     std::string s;
     std::cout <<  "Input name: " << std::endl  ;
     std::cin >>  s ;
debug_call__sayhello:
     sayHello(s);
     return EXIT_SUCCESS;
}
