#include <cmath>
#include <cstdio>
#include <vector>

constexpr int getValue(int value) {
    return value * 2;
}

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

    // Quiz
    const int *const fun(const int *const &p)
        const;  //(unless (bound-and-true-p yas-minor-mode) (yas-minor-mode 1))
};

int main(int argc, char *argv[]) {
    int y = 3;
    const int value = getValue(y);
    // static_assert(value == 12);
    BigArray ba;
    BigArray bc;
    bc.getItem(1);
    bc.getItem(123);
}
