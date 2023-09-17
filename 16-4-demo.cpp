#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;
/*
 * todo 可变参数模版
 * */

//exit
template<typename T>
ostream& print(ostream& os, const T& t) {
    os << t <<endl;
    return os;
}

//chain
template<typename T,typename... Args>
ostream& print(ostream& os,const T& t,Args... args) {
    os << t << " ";
    print(os,args...);
    return os;
}


int main() {
    print(cout,1,"string",0.0,3L);
    return 0;
}