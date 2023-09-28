#include <iostream>
#include <forward_list>
#include <vector>
/*
 * todo vector是如何增长的?
 *      vector,string  ---> amortized to achieve const grows
 *      vector<int> {1,2,3,4}
 * */


int main() {
    /*
     * todo capacity & size
     * */
    std::vector<int> vec = {1,2,3,4,5};
    vec.reserve(10);
    std::cout << vec.capacity() << std::endl;
    std::cout << vec.size() << std::endl;


    std::vector<int> vector;
    int prev_capacity = 0;
    for (int i = 0; i < 100000; i++) {
        if (prev_capacity != vector.capacity()) {
            std::cout << "changed ---> " << vector.capacity() << std::endl;
            prev_capacity = vector.capacity();
        }
        vector.push_back(i);
    }
    return 0;
}

