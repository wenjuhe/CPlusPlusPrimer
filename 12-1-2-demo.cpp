#include <iostream>
using namespace std;
using std::string;

//shallow /deep copy
class A{
public:
    int* a_;
    string b_;
    A(int a, string b): a_(new int(a)),b_(b) {
        cout << "in constructor" << endl;
    }
    A(const A& a) {
        /*
         *  todo 默认情况表下, compiler都是生成浅拷贝
         * */
        //this -> a_ = a.a_;  //copy the value of pointer address
        this -> a_ = new int(*(a.a_));
    }
    ~A(){
        cout << "in destructor " << b_ << endl;
        delete a_;
    }
};

void func() {
    A a1(12,"a1");
    A a2(a1); // copy construction
    a2.b_ = "a2";
    cout << a1.a_ << endl;
    cout << a2.a_ << endl;
    cout << "hello world 123" << endl;
}

int main() {
    func();
    cout << "hello world" << endl;
    return 0;
}