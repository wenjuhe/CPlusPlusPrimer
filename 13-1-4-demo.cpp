#include <iostream>
using namespace std;

/*
 * todo share_ptr
 * */
class Foo {
public:
    int* resource_;
    size_t* count_;

    Foo(int resource) : resource_(new int(resource)) {
        cout << "in constructor" << endl;
        this -> count_ = new size_t(1);
    }

    Foo (const Foo& foo) {
        cout << "in copy constructor" << endl;
        this->resource_ = foo.resource_;
        this->count_ = foo.count_;
        *(this->count_) += 1;
        cout << "update this->count " << *(this->count_) <<endl;
    }

    ~Foo() {
        *(this->count_) -= 1;
        if (*(this -> count_) ==0) { //no one points at this resource
            cout << "count--" << endl;
            delete this->count_;
            delete this->resource_;
        }
    }
};


int main() {
    Foo foo1(1);

    Foo foo2(foo1);

    Foo foo3(foo2);

    Foo foo4(foo3);

    cout << "how many people are pointing at it " << *(foo2.count_) << endl;

    return 0;
}