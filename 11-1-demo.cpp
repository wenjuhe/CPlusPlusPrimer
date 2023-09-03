#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;
using std::map;

/*
 *  sequential container
 *     vector vec = {1,2,3,4}
 *     string s = "abcd"
 *                s[1],s[2],s[3]
 *                vector[1],vector[2]
 *                random access
 *  associated container
 *     map set
 * */

void func(){
    map<int,int> m = {
            {1,2},
            {3,4}
    };
    cout << m[1] << endl;
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    for (map<int,int>::iterator  it  = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}

void func_2() {
    map<int,int> m = {
            {1,2},
            {3,4}
    };
    auto it = m.find(1);
    if (it != m.end()) {  //vector
        cout << it -> second << endl;
    } else {
        cout << "cannot find the value by the given key" << endl;
    }
    cout << m.count(3) << endl;
}

void func_3() {
    map<int,int> m = {
            {1,2},
            {3,4}
    };
    auto it = m.find(1);
    if (it != m.end()) {  //vector
        cout << it -> second << endl;
    } else {
        cout << "cannot find the value by the given key" << endl;
    }
    m.insert({1,5});  //插入失败
    cout << m.count(3) << endl;
    cout << m[1] << endl;
}

void func_4() {
    multimap<int,int> m = {
            {1,2},
            {3,4}
    };
    m.insert({1,5});  //插入失败
    cout << m.count(1) << endl;
}

int main(){
    //func();
    func_4();
    return 0;
}

