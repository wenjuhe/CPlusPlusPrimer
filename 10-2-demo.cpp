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
 *  todo 通用算法
 * */
bool WannBigger(const int& i1,const int& i2) {
    //return true if you want i1 go first before i2
    return i1 > i2;
}

void func() {
    //what the generic algorithm should look like
    std::vector<int> vec = {1,2,5,3,1,8,2,3,8,3,0};
    //iterator, optional ---> comparator
    //std::sort(vec.begin(),vec.end(),std::greater<int>());
    //std::sort(vec.begin(),vec.end(),std::less<int>());
    std::sort(vec.begin(),vec.end(), WannBigger);

    for (const int& num : vec) {
        std::cout << num << "  " << std::endl;
    }
}

void func_2() {
    std::vector<int> vec = {1,2,5,3,1,8,2,3,8,3,0};
    auto res = std::find(vec.begin(),vec.end(),7);
    if (res == vec.end()) {
        std::cout << "cannot find" << std::endl;
    } else {
        std::cout << "we find it!" << std::endl;
    }
}




int main() {
    //func();
    func_2();
    return 0;
}