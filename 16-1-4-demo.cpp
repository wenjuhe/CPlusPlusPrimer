#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 模板参数
 * */
template<typename T,typename F = std::less<T>>
//provide default argument for template
int compare(const T& t1,const T& t2,F f = F()) {
    if (f(t1,t2)) {
        return -1;
    }
    if (f(t2,t1)) {
        return 1;
    }
    return 0;
}

template<typename T>
bool isBigger(const T& t1,const T& t2) {
    return t1 > t2;
}

template<typename T = int>
class A {

};

int main() {
    cout << compare(1,2, isBigger<int>) << endl;
    A<> a1;
    A<long> a2;
    return 0;
}