#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 类的权限控制
 * */
class Base{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Derivative : /*private*/public Base{
    friend void intro(Derivative& de);
    void func() {
        //todo 继承类 类内可以访问b
        cout << b << endl;
    }
};

void intro(Derivative& de) {
    cout << de.b << endl;
}

int main() {
    Derivative derivative;
    //todo private Base继承的时候
    derivative.a;
    //todo 无法访问.
    //derivative.b;
    return 0;
}