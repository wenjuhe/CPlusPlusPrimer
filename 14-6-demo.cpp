#include <iostream>
using namespace std;
using std::ostream;

/*
 * i++
 * ++i
 * 1.better to put them into the class
 * 2.return reference when prefix++
 * 3.using int to distinguish between prefix & postfix
 *
 * */


class Point{
public:
    int x_;
    int y_;
    Point(int x,int y) : x_(x),y_(y) {}


    Point& operator++() {
        x_ += 1;
        y_ += 1;
        cout << "prefix current sum is " << x_ << " " << y_ << " " << endl;
        return *this;
    }

    Point& operator++(int) {
        x_ += 1;

        cout << "postfix current sum is " << x_ << " " << y_ << " " << endl;
        return *this;
    }
};


int main() {
    Point point(2,2);
    ++point;
    point++;
    return 0;
}
