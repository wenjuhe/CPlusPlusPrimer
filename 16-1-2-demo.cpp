#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 模板实例化
 * */
class A {
public:
    int a_;
    A(int a) : a_(a) {}
    //rhs ---> right hand side operand
    int operator+(const A& rhs) {
        return this->a_ + rhs.a_;
    }
};
/*
 *  1.return type
 *  2.argument list
 *  3.inside function body
 * */
template <typename T>
T add(T a,T b) {
    return a + b;
}


int main() {
    string a = "hello";
    string b = "world";
    add(1,2);
    add(a,b);
    add(1.0,2.0);
    A a1(1);
    A a2(2);
    add(a1,a2);
    return 0;
}