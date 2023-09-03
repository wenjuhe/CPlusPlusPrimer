#include <memory>
#include <iostream>
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

void func() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>();
    //c++ 14 已经有了!
    std::unique_ptr<A> uniquePtr = std::make_unique<A>(42); //vector.emplace_back()
    auto ptr = uniquePtr.release();
    ptr -> ~A();
}

void func_2() {
    std::unique_ptr<A> uniquePtr = std::make_unique<A>(42);
    uniquePtr.reset();
}

void func_3() {
    std::shared_ptr<A> ptr = std::make_shared<A>(42);
    std::shared_ptr<A> ptr2(ptr); //可以拷贝构造

    std::unique_ptr<A> ptr3 = std::make_unique<A>(42);
    //std::unique_ptr<A> ptr4(ptr3); 报错

}

std::unique_ptr<A> GetUniquePointer() {
    std::unique_ptr<A> ptr = std::make_unique<A>(42);
    return ptr;
} //tranfer ownership

void func_4() {
    //这样写就可以了!
    std::unique_ptr<A> ptr = GetUniquePointer();
}

void DestructionAClass(A* a) {
    cout << "in destruction" << endl;
    delete a->a_;
}

void func_5() {
    //function pointer
    std::unique_ptr<A,decltype(DestructionAClass)*> ptr(new A(42),DestructionAClass);
}

int main() {
    //func();
    //func_2();
    //func_4();
    func_5();
    cout << "hello world" << endl;
    return 0;
}