#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 模板初识
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


template <typename T>
T add(T a,T b) {
    return a + b;  //assume T has implemented + operator
}


int main() {
    string a = "hello";
    string b = "world";
    cout << add(1,2) << endl;
    cout << add(a,b) << endl;
    cout << add(1.0,2.0) << endl;
    A a1(1);
    A a2(2);
    add(a1,a2);
    //cout << add(a1,a2) << endl;

    return 0;
}