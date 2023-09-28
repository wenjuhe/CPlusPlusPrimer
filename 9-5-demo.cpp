#include <iostream>
/*
 * todo vector是如何增长的?
 *      字符串的应用
 * */

void func() {
    //char ---> num
    std::string s('c',10);
    std::cout << s << std::endl;
    std::cout << s.size() << std::endl;

    std::cout << "****" << std::endl;

    std::string ss(10,'c');
    std::cout << ss << std::endl;
    std::cout << ss.size() << std::endl;
    std::cout << ss + "abc" << std::endl;
    std::cout << ss[0] << std::endl;

    std::string sss("abcd");
    size_t pos = sss.find("ab");
    std::cout << pos << std::endl;

    size_t pos_2 = sss.find("c");
    std::cout << pos_2 << std::endl;

    size_t pos_3 = sss.find("er");
    std::cout << pos_3 << std::endl;
    std::cout << std::string::npos << std::endl;
}

int main() {
    func();
    return 0;
}