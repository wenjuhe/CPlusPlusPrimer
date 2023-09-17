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
 * todo forward和右值
 * */

template<typename FUNC,typename T1,typename T2>
void flip(FUNC func,T1 t1,T2 t2) {
    func(t2,t1);
}

template<typename FUNC,typename T1,typename T2>
void flip_2(FUNC func,T1&& t1,T2&& t2) {
    func(t2,t1);
}

template<typename FUNC,typename T1,typename T2>
void flip_3(FUNC func,T1&& t1,T2&& t2) {
    func(std::forward<T2>(t2),std::forward<T1>(t1));
}

void f(int v1,int& v2) {
    cout << v1 << " " << ++v2 << endl;
}

void g(int&& v1,int& v2) {
    cout << "hello, world" << endl;
}

//todo rvalue ---> match any type of arguments (lvalue,rvalue)
int main() {
    int i = 10;
    /*
     * FUNC  ---> f
     * T1    ---> int
     * T2    ---> int
     * */
    flip(f,i,42);
    /*
     * FUNC  ---> f
     * T1    ---> int&
     * T2    ---> int
     * */
    flip_2(f,i,42);
    /*
     * todo 报错
     * */
    //flip_2(g,i,42);
    flip_3(g,i,42);
    cout << i << endl;
}