#include <iostream>
namespace airbnb {
    //member
    extern int abc;  //declaration
    class Wang{
    public:
        int x_;
        explicit Wang(int x) : x_(x){}
        void func();
    };
} //namespace airbnb

namespace airbcb {
    template<typename T>
    class MyClass{
     public:
        void foo() {
            std::cout << "hello world" << std::endl;
        }
    };

    //todo template specialization  模板特例化必须定义在原始模板所属的命名空间中.
    template<>
    class MyClass<int> {
    public:
        void foo() {
            std::cout << "hello world in int" << std::endl;
        }
    };
} //namespace airbcb

