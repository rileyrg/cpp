#include <cstdio>
#include <vector>

class BigArray {
    std::vector<int> v;
    int accessCounter;

    public:
    int getItem(int index) const {
        //    accessCounter++;
        const_cast<BigArray *>(this)->accessCounter++;
        return v[index];
    }
};

int main(int argc, char *argv[]) {
    BigArray b;
}
