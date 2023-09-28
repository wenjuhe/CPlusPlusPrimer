#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> vec = {1,2,3};
    std::vector<int> vec3 = {4,5,6};
    std::vector<int> vec4 = {1,2,3};
    std::vector<int> vec2(10,-1);
    /*
     * todo vec.begin()  ---> first element of the vector
     *      vec.end()  ---> one element pass the last element
     *      const_iterator
     *      iterator
     * */
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout << *it << endl;
    }
    for (auto num : vec2) {
        cout << num << endl;
    }
    vector<int>::const_iterator  cit = vec.cbegin();
    cout << *cit << endl;
    auto rit_begin = vec.rbegin();
    cout << *rit_begin << endl;
    auto rit_end = vec.rend();
    cout << *rit_end << endl;
    /*
     * todo
     *  1. size same
     *  2. same type
     *  3. every element in the array should be same
     * */
    cout << (vec == vec3) << endl;
    cout << (vec == vec4) << endl;
    return 0;
}