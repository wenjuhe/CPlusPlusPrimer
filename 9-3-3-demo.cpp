#include <iostream>
#include <forward_list>
#include <vector>
/*
 * todo 迭代器的失效  本地代码运行结果跟视频结果有出入!
 * */
void func() {
    std::vector<int> vec = {1,2,3,4,5};

    std::cout << "at the beginning capacity" << vec.capacity() << std::endl;

    std::vector<int>::iterator vbegin = vec.begin();
    std::vector<int>::iterator vend = vec.end();

    for (auto it = vec.begin(); it != vec.end(); it++) {
        std::cout << "======" << std::endl;
        std::cout << "vec capacity " << vec.capacity() << std::endl;
        std::cout << *it << std::endl;
        if ((*it) == 2) {
            std::cout << "push is happenning" << std::endl;
            vec.push_back(100);
        }

        if (vbegin != vec.begin()) {
            //update iterator
            vbegin = vec.begin();
            std::cout << "change vbegin" << std::endl;
        }

        if (vend != vec.end()) {
            //update iterator
            vend= vec.end();
            std::cout << "change vend" << std::endl;
        }
    }

    for (const int& num : vec) {
        std::cout << num << " " << std::endl;
    }
}

int main() {
    func();
    return 0;
}

