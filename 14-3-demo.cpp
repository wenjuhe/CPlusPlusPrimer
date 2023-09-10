#include <iostream>
#include <map>
using namespace std;
using std::ostream;


class A{
private:
    int b_;
public:
    int a_;
    A() : a_(0){}
    A(int a) : a_(a) {}

    bool operator==(const A& a) {
        cout << "in compartor" << endl;
        return this->a_ == a.a_;
    }
};

bool operator==(const A& a1,const A& a2) {
    cout << "in outside operator == " << endl;
    return a1.a_ == a2.a_;
}

bool operator!=(const A& a1,const A& a2) {
    cout << "in != "<< endl;
    return !(a1 == a2);
}

int main() {
    map<int,int> m1 =
            {
                    {1,2},
                    {2,3}
            };
    map<int,int> m2 =
            {
                    {1,2},
                    {2,3}
            };
    cout << (m1 ==  m2) << endl;

    A a1(1);
    A a2(1);
    cout << (a1 == a2) << endl;
    cout << (a1 != a2) << endl;
    return 0;
}
