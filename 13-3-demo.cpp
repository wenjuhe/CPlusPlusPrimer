#include <iostream>
using namespace std;

class Bar{
    friend void swap(Bar&,Bar&);
public:
    int b;
};

inline void swap(Bar& bar1,Bar& bar2){
    cout << "in Bar swap" << endl;
    using std::swap;
    swap(bar1.b,bar2.b);
}

class Foo{
    friend void swap(Foo&,Foo&);
public:
    string* ps;
    int a;
    Bar bar;
    Foo(const string s) : ps(new string(s)),a(0),bar(Bar()){}
};

inline void swap(Foo& lhs,Foo& rhs){
    cout << "in Foo swap" << endl;
    using std::swap;  //naming space
    swap(lhs.ps,rhs.ps);
    swap(lhs.a,rhs.a);
    swap(lhs.bar,rhs.bar);
}
int main() {
    Foo foo1("hello");
    Foo foo2("shoot");
    using std::swap;
    swap(foo1,foo2);
    return 0;
}
