#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 类模板
 * */
template<typename T>
class A {
public:
    T a_;
    A() {}

    A& func() {
        cout << "hello world" << endl;
        cout << a_ << endl;
        return *this;
    }

    A& func2();

    static int count;
};

template<typename T>
A<T>& A<T>::func2() {
    cout << "in func2" << endl;
    return *this;
}

template<typename T>
int A<T>::count = 0;

class B{

};

template<typename M>
class Pal {

};

int main() {
    A<int> a1;
    int c = a1.a_;
    a1.func();
    a1.func2();

    A<B> a2;
    /*
     * todo 如果下面不注释掉,类模板A中的func函数的cout语句会报错
     * */
    //a2.func();

    a1.count += 1;

    A<long> a3;
    a3.count +=10;
    cout << A<int>::count << endl;
    cout << A<long>::count << endl;
    return 0;
}