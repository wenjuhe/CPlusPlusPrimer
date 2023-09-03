#include <iostream>
#include <memory>
using namespace std;
using std::string;
using std::cout;
using std::endl;
// shallow /deep copy
class A {
public:
    int* a_;
    A(int a) : a_(new int(a)){
        cout << "in constructor" << endl;
    }
    A(const A& a) {
        this->a_ = new int(*(a.a_));
    }
    ~A() {
        cout << "in destructor" << endl;
        delete a_;
    }
};

void func() {
    //dangling pointer
    A* a = new A(42);
    {
        std::shared_ptr<A> ptr(a);  //use_count = 1
    }//退出作用域 use_count = 0;
    /*
     * todo 上面作用域的智能指针已经将a摧毁了,下面还用就有问题
     * */
    cout << a -> a_ << endl;
}
void ThrowException() {
    throw std::bad_exception();
}


int main() {
    func();
    cout << "hello world" << endl;
    return 0;
}
