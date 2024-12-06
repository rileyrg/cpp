#include <cstdio>
#include <vector>

class BigArray {

    std::vector<int> v;
    int accessCounter;
    int *v2;  // another int array

public:
    int getItem(int index) const {
        // accessCounter++;
        const_cast<BigArray *>(this)->accessCounter++;
        return v[index];
    }

    void setV2Item(int index, int x) const {
        *(v2 + index) = x;
    }
};

int main(int argc, char *argv[]) {
    BigArray b;
}
