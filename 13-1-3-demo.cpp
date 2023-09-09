#include <iostream>
using namespace std;

/*
 * todo delete default
 * */
class Foo {
public:
    int* a_;

    Foo(int a) : a_(new int(a)) {
        cout << "in direct constructor" << endl;
    }

    Foo (const Foo& foo) {
        cout << "in copy constructor" << endl;
        this->a_ = new int(*(foo.a_));
    }

    //copy assignment
    Foo& operator=(const Foo& foo) = default;
    //Foo& operator=(const Foo& foo) = delete;

    ~Foo() {
        delete a_;
        cout << "in destructor" << endl;
    }
private:
    int b;
};


int main() {
    Foo foo1(1);

    //declare  define
    Foo foo2 = foo1;

    Foo foo3(2);

    foo3 = foo2;

    cout << (foo3.a_ == foo2.a_) << endl;

    return 0;
}