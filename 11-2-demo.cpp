
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
using std::map;
using std::pair;
using std::cout;
using std::unordered_map;

void func() {
    pair<int,int> pair = {1,2};
    cout << pair.first << pair.second << endl;
}

void func_2() {
    pair<int,pair<int,int>> pair = {1,{2,3}};
    cout << pair.first << " " << pair.second.first << " " << pair.second.second << endl;
}

class A{
public:
    int a_;
    A(int a) : a_(a) {}
};


bool WannaBigger(const A& a1,const A& a2) {
    //return true iif a1 goes first before a2
    return a1.a_ > a2.a_;
}

void func_3() {
    map<A,int,decltype(WannaBigger)*>  my_map(WannaBigger);
    my_map.insert({A(1),2});
    my_map.insert({A(2),3});
    my_map.insert({A(3),4});
    my_map.insert({A(4),5});
    for (auto it = my_map.begin();it != my_map.end();it++) {
        cout << it->second << endl;
    }
}

void func_4() {
    /*unordered_map<A,int> my_unordered_map;
    my_unordered_map.insert({A(1),1});*/
}

int main() {
    cout << "func result" << endl;
    func();
    cout << "func_2 result" << endl;
    func_2();
    cout << "func_3 result" << endl;
    func_3();
    cout << "func_4 result" << endl;
    func_4();
    return 0;
}