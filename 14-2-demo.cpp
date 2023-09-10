#include <iostream>
using namespace std;
using std::ostream;

/*
 * todo
 *  1. lhs,rhs  operator+(const A& a)
 *  2. const ostream& 流状态会改变
 *  3. friend
 *
 * */

class A{
    //declare
    friend ostream& operator<<(ostream& , const A&);
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

ostream& operator<<(ostream& os,const A& a) {
    //optional
    cout <<"in operator << " << endl;
    os << a.a_ << endl;
    return os;
}

A operator+(const A& lhs,const A& rhs){
    A a;
    a.a_ = lhs.a_ + rhs.a_;
    return a;
}



int main() {
    //chain function
    cout << "hello " << "world " << "wechat" << endl;
    //ostream&
    //lhs << rhs
    A a(1);
    cout << a << endl;
    return 0;
}
