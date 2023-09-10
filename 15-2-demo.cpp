#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

/*
 * todo 基类和衍生类
 * */
class Book{
public:
    static int a;
    string ISBN;
    //todo 注意这里定义virtual和不定义virtual的区别
    Book(string isbn) : ISBN(isbn) {
        cout << "in Book constructor" << endl;
    }
    Book() {
        cout << "explicit book" << endl;
    }
    virtual void func() {
        cout << "Book" << endl;
    }
    ~Book() {
        cout <<  "In Book destructor" << endl;
    }
};

int Book::a = 0;

class ComicBook : public Book{
public:
    bool picture_;
    ComicBook(bool picture) : /*Book("123"),*/ picture_(picture){
        cout << "in ComicBook constructor" << endl;
    }
    //dynamic binding
    void func() override{
        cout << "Comic Book" << endl;
    }
    ~ComicBook(){
        cout << "In ComicBook destructor" << endl;
    }
};

class ActionBook : public Book{
public:
    void func() override {
        cout << "Action Book" << endl;
    }
};


/*
 * Constructing :  Base class ---> Derived class
 * Destruct     : Derived class ---> Base class
 *
 * */

int main() {
    ComicBook comicBook(true);
    /*
     * static type
     * dynamic type
     * */
    Book& b1 = comicBook;
    b1.func();

    Book::a += 1;
    cout << ComicBook::a << endl;
    return 0;
}