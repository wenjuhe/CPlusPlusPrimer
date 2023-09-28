#include <iostream>
#include <vector>
using namespace std;


class A {
public:
    int a_;
    int b_;
    A(int a,int b) : a_(a),b_(b){}
};

int main() {
    std::vector<int> vec = {1,2,3};
    std::vector<int>::iterator it = vec.begin() + 1;
    int i = 2;
    while (i != 0) {
        /*
         * todo insert方法返回的是迭代器!
         *      minimize the scope of iterator
         * */
        it = vec.insert(it,100);
        i--;
    }

    for (const int& num : vec) {
        cout << num << endl;
    }

    cout << "#####" << endl;
    std::vector<int> vec2;
    vec2.push_back(1);
    vec2.emplace_back(1);
    for (auto num : vec2) {
        cout << num << endl;
    }
    cout << "#####" << endl;
    std::vector<A> vec3;
    //todo construct the A, copy object
    vec3.push_back(A(1,2));
    //todo construct the A, move object
    vec3.emplace_back(2,3);
    for (auto A : vec3) {
        cout << A.a_ << endl;
    }
    return 0;
}