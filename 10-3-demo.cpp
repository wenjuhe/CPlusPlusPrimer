#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;
using std::set;
using std::map;
using std::unordered_map;

/*
 * todo callable object
 *      1. function
 *      2. function pointer
 *      3. class operator ()
 *      4. lambda
 *
 *  todo lambda
 *      [capture list](parameter list) -> return type {function body}
 *
 * */


int main() {
    int sz = 10;
    auto my_func = [&](){return sz;};
    std::cout  << my_func() << std::endl;

    int cap = 0;
    /*
     * generate class instantiate object
     * callable object
     * & ->  capture by reference
     * = ->  capture by value
     * */
    auto WannaBigger = [cap](const int& lhs, const int& rhs) -> bool {
        //return true if you want lhs goes first before rhs
        std::cout << cap << std::endl;
        return lhs > rhs;
    };

    std::vector<int> vec = {1,2,3,4,5};
    std::sort(vec.begin(),vec.end(),WannaBigger);
    for (const int& num : vec) {
        std::cout << num << " ";
    }
    std::cout << "***********" << std::endl;
    int my_value_2 = 0;
    auto my_func_2 = [=]() {
        return my_value_2;
    };
    my_value_2 = 42;
    std::cout << my_func_2() << std::endl;

    int my_value_3 = 0;
    auto my_func_3 = [&]() {
        return my_value_3;
    };
    my_value_3 = 42;
    std::cout << my_func_3() << std::endl;
    return 0;
}