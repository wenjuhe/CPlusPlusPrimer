#include <iostream>
#include <vector>
using namespace std;
using std::ostream;


class A{
public:
    int a_;
    vector<int> vec = {1,2};
    A() : a_(0){}
    A(int a) : a_(a) {}

    int& operator[](std::size_t index) {
        //in non-const version
        cout << "in non const version" << endl;
        return vec[index];
    }

    const int& operator[](std::size_t index) const{
        cout << "in const version" << endl;
        return vec[index];
    }

    A& operator=(std::initializer_list<int> list) {
        cout << "in operator =" << endl;
        for (const int& num : list) {
            vec.push_back(num); //copy
        }
        return *this;
    }
};


int main() {
    A a(1);
    a = {1,2,3};
    cout << a[4] << endl;
    cout << a.vec.size() << endl;

    const A a2(1);
    cout << a2.operator[](0) << endl;
    cout << a2[0] << endl;
    return 0;
}
