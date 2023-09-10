#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

/*
 *  todo 虚函数 + 动态绑定
 * */
class Book{
public:
    string ISBM;
    //todo 注意这里定义virtual和不定义virtual的区别
    virtual void func() {
        cout << "Book" << endl;
    }
};

class ComicBook : public Book{
public:
    //dynamic binding
    void func() {
        cout << "Comic Book" << endl;
    }
};

class ActionBook : public Book{
public:
    void func() {
        cout << "Action Book" << endl;
    }
};

class A{

};

class B{

};


int main() {
    /*A a;
    B b;
    a = (A)b;*/
    ComicBook comicBook;
    ActionBook actionBook;
    comicBook.func();

    Book* b1 = (Book*)(&comicBook);
    Book& b2 = actionBook;
    b1->func();
    b2.func();
    return 0;
}