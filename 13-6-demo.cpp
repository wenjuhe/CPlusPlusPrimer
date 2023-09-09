#include <iostream>
#include <vector>

using namespace std;

/*
 *  vector 1,2,3,4
 *         *,*,*,*,*,*,*,*
 *
 *         *,*,3,4
 *         1,2,*,*,*,*,*,*
 * */

class Move{
public:
    int a_;

    Move(int a) : a_(a){
        cout << "in constructor " << a << endl;
    }

    Move(const Move& move) {
        cout << "in copy constructor " << move.a_ << endl;
        this->a_ = move.a_;
    }

    //move constructor
    Move(Move&& move) noexcept{
        cout << "in move constructor" << move.a_ << endl;
        this->a_ = move.a_;
    }

    ~Move() {
        cout << "in deconstructor" << endl;
    }
};
int main() {
    vector<Move> vec;
    vec.push_back(Move{10});
    return 0;
}
