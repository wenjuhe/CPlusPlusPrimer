#include <iostream>
#include <forward_list>
#include <vector>

void func() {
    std::forward_list<int> my_list = {1,2,3,4,5};
    /*
     * todo 通过before_begin实现了对于头结点去特殊化的一个操作!
     * */
    std::forward_list<int>::iterator prev = my_list.before_begin();
    std::forward_list<int>::iterator cur = my_list.begin();
    while (cur != my_list.end()) {
        if (*cur % 2 == 0) {
            cur = my_list.erase_after(prev);
        } else {
            prev = cur;
            cur++;
        }
    }

    for (const int& num : my_list) {
        std::cout << num << std::endl;
    }
}

int main() {
    //func();
    std::vector<int> vec = {1,2,3};
    std::cout << "the size of vec " << vec.size() << std::endl;

    vec.resize(5,-1);
    std::cout << "the size of vec " << vec.size() << std::endl;
    for (const int num : vec) {
        std::cout << num << std::endl;
    }
    return 0;
}

/*
 * bear make -j12
 * 之后疯狂回车
 * */