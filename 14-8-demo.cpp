#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using std::ostream;


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
    Point(int x,int y) : x_(x),y_(y) {}

    int operator()() {
        return x_ + y_;
    }

    int operator()(int a) {
        return x_ + y_ + a;
    }

    string operator()(int a,int b) {
        int res = x_ + y_ + a + b;
        return std::to_string(res);
    }
};

class UnnamedClass {
public:
    int operator()() const {
        return 2 + 3;
    }
};

class UnnamedClass_2{
public:
    int operator()(int c) const {
        return 2 + 3 + c;
    }
};

class UnnamedClass_3 {
public:
    int sz_;
    int operator()(int c) const {
        return 2 + 3 + c + this->sz_;
    }
    UnnamedClass_3(int sz) : sz_(sz) {}
};

int main() {
    Point point(2,2);
    cout << point() << endl;
    cout << point(5) << endl;
    cout << point(5,6) << endl;

    auto func = []() -> int {
        return 2 + 3;
    };

    //unnamed object of unnamed class
    UnnamedClass unnamedClass;
    cout << func() << endl;
    cout << unnamedClass() << endl;


    UnnamedClass_2 unnamedClass2;
    auto func_2 = [](int c) -> int {
        return 2 + 3 + c;
    };
    cout << func_2(5) << endl;
    cout << unnamedClass2(5) << endl;

    UnnamedClass_3 unnamedClass3(3);
    int sz;
    //capture list
    auto func_3 = [sz](int c) -> int {
        return 2 + 3 + c;
    };

    vector<int> vec = {1,2,3,4,5,6};
    sort(vec.begin(),vec.end(),std::greater<int>());
    for (int num : vec) {
        cout << num << endl;
    }
    return 0;
}
