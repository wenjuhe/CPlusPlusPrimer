#include <memory>
#include <iostream>
using namespace std;
using std::string;

class A {
public:
    int a_;
    string b_;
    A(int a,string b) : a_(a),b_(b){
        cout << "in constructor" << endl;
    }
    ~A() {
        cout << "in destructor" << endl;
    }
};

void func() {
    std::shared_ptr<int> ptr = std::make_shared<int>(42);
    std::shared_ptr<int> ptr2(ptr);

    cout << ptr.use_count() << endl;
    cout << ptr2.use_count() << endl;

    {
        std::shared_ptr<int> ptr3(ptr);
        cout << ptr.use_count() << endl;
        cout << ptr3.use_count() << endl;
    }

    cout << ptr.use_count() << endl;
}

void func_2() {
    cout << "in function begin" << endl;
    std::shared_ptr<A> ptr = std::make_shared<A>(10,"hello world");
}

int main() {
    func_2();
    cout << "in function end" << endl;
    return 0;
}