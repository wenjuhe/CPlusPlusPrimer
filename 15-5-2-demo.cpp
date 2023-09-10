#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

/*
 * todo struct和class区别
 * */
class Base{
public:
    int a;
protected:
    int b;
private:
    int c;
};


struct A : /*public*/ Base{
    int a;
};

class B : /*private*/ Base{
    int b;
};

int main() {
    A a;
    B b;
    a.a;
    //todo 访问不到
    //b.b;
    return 0;
}