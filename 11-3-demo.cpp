#include <iostream>
#include <set>
#include <map>
using namespace std;
using std::set;
using std::map;

//iterators for sets are cosnt
void func() {
    set<int> s;
    for (auto it = s.begin(); it != s.end();it++) {
        //*it = 12;  //错误
    }
}

//subscripting a map
void func_2() {
    map<int,int> m;
    m[1] = 1;
}

void func_3(){
    map<int,int> m;
    for (int i = 0; i < 10; i++) {
        if (m[i] ==0) {
            cout << "hello world" << endl;
        }
    }
    cout << m.size() << endl;
}

void func_4() {
    map<int,int> m;
    for (int i = 0; i < 10; i++) {
        if (m.count(i) == 0) {
            cout << "hello world" << endl;
        }
    }
    cout << m.size() << endl;
}

/*
 * lower bound(key)
 *    return the element no less than key
 * upper bound(key)
 *    return the element one bigger than key
 * lower upper
 * range
 * */

void func_5() {
    map<int,int> m;
    for (int i = 0; i < 10; i++) {
        m.insert({i,i});
    }
    /*
     * {0,0}
     * {1,1}
     * ...
     * {10,10}
     * */
    auto it1 = m.lower_bound(3);
    auto it2 = m.upper_bound(3);
    for(auto it = it1;/*it != it2*/;it++){
        cout << it->second << endl;
        if (it == it2)
            break;
    }
}

void func_6() {
    multimap<int,int> m;
    for (int i = 0; i < 10; i++) {
        m.insert({i,i});
    }
    m.insert({3,5});
    m.insert({3,6});
    auto it1 = m.lower_bound(3);
    auto it2 = m.upper_bound(3);
    for(auto it = it1;it != it2;it++){
        cout << it->second << endl;
        /*if (it == it2)
            break;*/
    }
}

void func_7() {
    multimap<int,int> m;
    for (int i = 0; i < 10; i++) {
        m.insert({i,i});
    }
    m.insert({3,5});
    m.insert({3,6});
    /*
     * todo 编译的时候,这里会有警告 it1被设定但未被使用
     * */
    auto it1 = m.lower_bound(3);
    auto it2 = m.upper_bound(10);
    cout << (it2 == m.end()) << endl;
}

int main() {
    cout << "func_3 result" << endl;
    func_3();
    cout << "func_4 result" << endl;
    func_4();
    cout << "func_5 result" << endl;
    func_5();
    cout << "func_6 result" << endl;
    func_6();
    cout << "func_7 result" << endl;
    func_7();
    return 0;
}