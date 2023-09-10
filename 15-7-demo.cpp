#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

/*
 * todo 构造和析构结构
 * */
class Base{
public:
    int a_;
    Base(int a) : a_(a){
        cout << "hello in Base" << endl;
    }
    Base() : a_(10) {
        cout << "in another constructor" << endl;
    }
    virtual ~Base() {
        cout << "bye in Base" << endl;
    }
};

class Derivative : public Base{
public:
    int b_;
    Derivative(int a,int b) : Base(),b_(b) {
        cout << "hello in Derivative" << endl;
    }
    ~Derivative(){
        cout << "bye in Derivative" << endl;
    }
};

/*
 * todo type transformation
 * */
int main() {
    Derivative derivative(1,2);
    return 0;
}