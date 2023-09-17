#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 模版类嵌套
 *      member template
 *      member template in class template
 * */

//todo 普通(非模板)类的成员模板
class DebugDelete{
public:
    template<typename T>
    void operator() (T* p) {
        cout << "hello, I am gonna delete it" << endl;
        delete p;
    }
};

int main() {
    double* p = new double(10);
    DebugDelete d;
    d(p);
    return 0;
}