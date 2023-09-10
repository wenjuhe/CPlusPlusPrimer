#include <iostream>
#include <vector>
using namespace std;
using std::ostream;


class A{
public:
    int a_;
    vector<int> vec;
    A() : a_(0){}
    A(int a) : a_(a) {}

    A& operator=(std::initializer_list<int> list) {
        cout << "in operator =" << endl;
        for (const int& num : list) {
            vec.push_back(num); //copy
        }
        return *this;
    }
};

//todo operator= 必须是成员函数
/*A& operator=(A& a,std::initializer_list<int> list) {
    cout << "in operator =" << endl;
    for (const int& num : list) {
        a.vec.push_back(num); //copy
    }
    return a;
}*/

int main() {
    A a(1);
    a = {1,2,3,4};
    cout << a.vec.size() << endl;
    return 0;
}
