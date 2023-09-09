#include <iostream>
using namespace std;


/*
 * todo 拷贝赋值运算符
 *      析构函数
 * */

class Foo {
public:
    int a_;

    Foo(int a) : a_(a) {
        cout << "in direct constructor" << endl;
    }

    Foo (const Foo& foo) {
        cout << "in copy constructor" << endl;
        this->a_ = foo.a_;
    }

    //copy assignment
    Foo& operator=(const Foo& foo) {
        cout << "in copy assignment" << endl;
        this->a_ = foo.a_;
        return *this; //built-in
    }

    ~Foo() {
        cout << "in destructor" << endl;
    }
};


int main() {
    Foo foo1(10);

    //declare  define
    Foo foo2 = foo1;

    Foo foo3(2);

    foo3 = foo2;

    return 0;
}