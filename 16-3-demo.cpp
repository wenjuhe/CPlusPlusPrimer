#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 模板重载
 *      1. non-template
 *      2. template ---> more speicified
 * */

template<typename T>
void func(const T& t) {
    cout << "in const T&" <<endl;
}

template<typename T>
void func(T* p) {
    cout << "in T*" << endl;
}

void func(string* p) {
    cout << "in string*" << endl;
}

int main() {
    string str = "hello";
    func(str); //T ---> string
    string str2 = "hello";
    func(&str2);//T ---> string*
    return 0;
}