#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

/*
 *  todo 类的作用范围
 * */
class Base{
public:
    void func() {
        cout << "In Base" << endl;
    }
};

class Derivative : public Base{
public:
    void func() {
        cout << "In Derivative" << endl;
    }
};

/*
 * todo name lokkup
 *      name resolvtion
 * */
int main() {
    Derivative de; //static type --->  Derivative
    de.func();
    return 0;
}