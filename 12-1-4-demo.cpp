#include <iostream>
#include <memory>
using namespace std;

class A {
public:
    int* a_;
    A(int a):a_(new int(a)) {
        cout << "in construcor" << endl;
    }
    A(const A& a){
        this -> a_ = new int (*(a.a_));
    }

    ~A() {
        cout << "in destructor" << endl;
        delete a_;
    }
};

//智能指针的好处
void ThrowException(){
    throw std::bad_exception();
}

void func(){
    std::shared_ptr<A> ptr = std::make_shared<A>(42);
    try{
        ThrowException();
        //const 不会对exception做修改
        //引用 不会去拷贝
    } catch (const std::exception& exception) {
        cout << exception.what() << endl;
        return;
    }
}

void DestructAClass(A* a) {
    delete a->a_;
    cout << "in self-made destrution" << endl;
}

void func_2() {
    std::shared_ptr<A>(new A(42),DestructAClass);
    cout << "hello world" << endl;
}



int main() {
    //func();
    func_2();
    cout << "hello world" << endl;
    return 0;
}