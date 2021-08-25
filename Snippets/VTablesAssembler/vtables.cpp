//  https://guihao-liang.github.io/2020/05/30/what-is-vtable-in-cpp


#include <cstdio>

struct Bar {
    virtual void method1() {
        std::puts("method1: this is bar");
    }

    virtual void method2() {
        std::puts("method2: this is bar");
    }
    virtual ~Bar() {};
};

struct Foo: public Bar {
    virtual void method1() {
        std::puts("method1: hi, I'm foo");
    }
    virtual ~Foo() {};
};

int main() {
    Bar bar;
    Foo foo;
    Bar* bar_arr[2];
    bar_arr[0] = &bar;
    bar_arr[1] = dynamic_cast<Bar*>(&foo);

    for (auto ptr: bar_arr) {
        ptr->method1();
        ptr->method2();
    }
    return 0;
}
