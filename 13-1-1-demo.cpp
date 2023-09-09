#include <iostream>
#include <thread>
using namespace std;
using std::thread;


/*
 *  todo 拷贝构造函数 copy constructor
 *  todo  rule of three
 *      copy constructor
 *      copy assign operator
 *      destructor
 *  todo  rule of five
 *      copy constructor
 *      copy assign operator
 *      destructor
 *      move constructor
 *      move assign operator
 * */


class A {
public :
    int a_;
    A(int a) : a_(a){
        cout << "in direct constructor A" << endl;
    }
    //copy constructor
    A (const A& rhs) {
        this ->a_ = rhs.a_;
        cout << "in copy constructor" << endl;
    }
    ~A() {
        cout << "in destructor A" << endl;
    }
};

void func() {
    A a1(10);  // in direct construction

    A a2(a1);  // not direct construction copy constuctor

    A a3 = a2; // not direct construction copy constuctor
}

void func(A a) {
    cout << "in func" << endl;
}

A func_2(A a) {
    cout << "in func_2" << endl;
    return a;
}

A& func_3(A& a) {
    cout << "in func_3" << endl;
    return a;
}

struct ABC {
    int a;
    bool b;
};

int main() {
    //func();
    A a1(10);
    //func_2(a1);
    func_3(a1);
    /*
     * todo 用花括号列表初始化一个数组中的元素或一个聚合类中的成员
     * */
    ABC abc = {1, false};
    return 0;
}