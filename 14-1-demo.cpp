#include <iostream>

using namespace std;


class A{
public:
    int a_;
    A() : a_(0){}
    A(int a) : a_(a) {}
    /*
     *  left hand side right head side
     *  lhs rhs
     * */
    A& operator+(const A& a) {
        cout << a.a_ << endl;
        cout << "in operator + " << endl;
        this -> a_ += a.a_;
        return *this;
    }
};

A operator+(const A& lhs,const A& rhs){
    A a;
    a.a_ = lhs.a_ + rhs.a_;
    return a;
}

void func (const int* a) {

}

void func (int* a) {

}

/*void func(int* const a) {

}*/

int main() {
    A a1(1);
    A a2(2);
    A a3;
    //name lookup
    a3 = a1 + a2;  //binary operand
    cout << a1.a_ << endl;
    cout << a2.a_ << endl;
    cout << a3.a_ << endl;
    return 0;
}
