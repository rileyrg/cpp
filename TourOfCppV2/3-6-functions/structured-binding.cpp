#include <cstdlib>
#include <iostream>
#include <string>

struct Entry {
     std::string s;
     int i;
};

Entry read_entry(std::istream &is){
     std::string s;
     int i;
     is >> s >> i;
     return{s,i};
}

int  main(){
     auto [s,i] = read_entry(std::cin);
debug_inspect__structured_bind:
     std::cout <<  "{" << s << ", " << i << "}" << std::endl;
}
