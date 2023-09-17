#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include<array>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 模版Specializations
 * */

//todo non-type template parameter
//substition
template<std::size_t Size>
void func(std::array<int,Size> myArray) {
    for (std::size_t i = 0; i < Size; i++){
        cout << myArray[i] << endl;
    }
}

template<typename T>
void func(const T& t1,const T& t2) {
    cout << "in const T& t1,const T& t2" << endl;
}

template<std::size_t  M, std::size_t N>
void func(const char(&)[M],const char(&)[N]){
    cout << "in const char(&)[M],const char(&)[N]" << endl;
}

class A{

};

int main() {
    std::array<int,5> MyArray = {1,2,3,4,5};
    func(MyArray);

    string str1 = "hello";
    string str2 = "world";
    //string, not string literal value
    func(str1,str2);
    //string literal, C++  char[] ---> char*
    func("he","she");

    std::unordered_set<A*> set;
    A a = A();
    /*
     * todo hash built-in support for pointer
     * */
    set.insert(&a);
    /*
     * todo class A 没有实现hash
     * */
    //set.insert(A());
    return 0;
}