#include <iostream>
using namespace std;
using std::ostream;

/*
 * arrow -> overload member access
 * */

class A{
public:
    int* a_;
    A(int a) : a_(new int(a)){}

    void func() {
        cout << "hello world" << endl;
    }
};

class Point{
public:
    int x_;
    int y_;
    A* pa_;
    Point(int x,int y) : x_(x),y_(y),pa_(new A(x)) {}

    //overload ->
    A* operator->() {
        cout << "in Point -> " << endl;
        return pa_;
    }

    Point& operator++() {
        x_ += 1;
        y_ += 1;
        cout << "prefix current sum is " << x_ << " " << y_ << " " << endl;
        return *this;
    }

    Point& operator++(int) {
        x_ += 1;

        cout << "postfix current sum is " << x_ << " " << y_ << " " << endl;
        return *this;
    }
};


int main() {
    Point point(2,2);
    point->func();
    int* res = point->a_;
    cout << (*res) << endl;
    //++point;
    //point++;
    return 0;
}
