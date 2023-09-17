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
 * todo 右值转换左值
 *      cosnt int*   ---> low level
 *      const ptr    ---> top level
 * */

template<typename T>
void func(const T ptr) {
    int a =100;
    //ptr = &a;  //error
    *ptr = a;  //ok
}

template<typename T>
void func_2(T&& name) {

}


int main() {

    int a = 10;
    int* ptr = &a;
    func(ptr);
    cout << *ptr << endl;

    int i = 10;
    /*
     * int& T
     * func_2(int& && name)  ---> func_2(int& name)
     * */
    func_2(i);
    return 0;
}