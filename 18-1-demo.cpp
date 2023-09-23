#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

class MyException : public std::runtime_error{
public:
    MyException (std::string reason) : std::runtime_error(reason) {

    }
};

void func() {
    try{
        throw MyException("hello this is my exception");
    } catch (const std::exception& e) {
        cout << "in general exception" << endl;
    } catch (const MyException& e) {
        cout << "in MyException" << e.what() << endl;
    }
}


int main() {
    func();
    return 0;
}