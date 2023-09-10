#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

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
    //todo pure virtual function
    virtual void func() = 0;
    ~Book() {
        cout <<  "In Book destructor" << endl;
    }
};

int Book::a = 0;

class ComicBook : public Book{
public:
    bool picture_;
    ComicBook(bool picture) : picture_(picture){
        cout << "in ComicBook constructor" << endl;
    }
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



int main() {
    ComicBook comicBook(true);
    Book& b1 = comicBook;
    b1.func();
    return 0;
}