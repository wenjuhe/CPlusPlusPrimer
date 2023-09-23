#include <iostream>
#include <vector>
#include "hello.h"
using namespace std;
//匿名namespace
namespace {
    using std::cout;
    using std::endl;
    using std::string;
    using std::vector;
}
int main() {
    airbnb::Wang wang(1);
    wang.func();
    cout << airbnb::abc << endl;

    airbcb::MyClass<int> my_class_int;
    my_class_int.foo();

    airbcb::MyClass<long> my_class_long;
    my_class_long.foo();
}