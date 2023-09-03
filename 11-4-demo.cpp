#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

class A{

};

void func() {
    unordered_map<int,int> my_unordered_map;
    map<int,int> my_map;  // key -> operator <
}

/*
 * todo 注意func_2和func_3的key的区别.
 * */
void func_2() {
    //unordered_map<A,int> my_unordered_map;
}

void func_3() {
    unordered_map<A*,int> my_unordered_map;
}


int main() {
    return 0;
}