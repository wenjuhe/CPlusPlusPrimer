#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <vector>
/*
 * todo 容器继承
 * */
using namespace std;
using std::set;
using std::map;
using std::unordered_map;


class Base{
public:
    int a_;
};

class Derivative : public Base{
public:
    int b_;
};


int main() {
    Derivative derivative;
    derivative.a_ = 1;
    derivative.b_ = 2;
    vector<Base*> vec;
    Base base = Base();
    vec.push_back(&base);
    vec.push_back(&derivative);
    Derivative* derivativeP = (Derivative*) vec[1];
    cout << derivativeP->b_ << endl;
    //todo slice down
    //cout << vec[1].b_ << endl;
    return 0;
}