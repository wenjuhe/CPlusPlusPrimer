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
 * todo 模版类型推断
 * */

template<typename T>
void func(T t1) {
    //assume t1 has implemented stream operations
    cout << t1 << endl;
}

/*
 * todo function arguments
 *      trailing return + decltype
 * */

template<typename It>
auto func_2(It begin,It end) -> decltype(*begin) {
    return *begin; //reference
}

int main() {
    /*
     * function template
     * */
    //top level const
    const int a = 10; //top level /low level
    func(a); //conversion


    vector<int> vec = {1,2,3};
    int& val = func_2(vec.begin(),vec.end());
    val = 10;
    cout << vec[0] <<endl;
    return 0;
}