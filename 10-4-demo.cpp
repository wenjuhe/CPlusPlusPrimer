#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;
using std::set;
using std::map;
using std::unordered_map;

void func() {
    std::vector<int> vec = {1,2,3,4,5};

    for (auto it = vec.begin(); it != vec.end();it++) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;

    /*
     * r   reverse
     * */
    for (auto it = vec.rbegin(); it != vec.rend(); it++){
        std::cout << *it << " ";
    }
}


int main() {
    func();
    return 0;
}