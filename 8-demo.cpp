#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <fstream>
#include <sstream>
using namespace std;
using std::set;
using std::map;
using std::unordered_map;

int main() {
    std::ofstream os("test.txt",std::ios::app);
    os << "wangze\n";
    os << "hello world\n";
    os.flush();
    os.close();

    std::ifstream is("test.txt");
    string str;
    getline(is,str);
    cout << str << endl;
    is.close();

    //leetcode
    string raw_string = "hello world hey how you doing";
    std::stringstream ss(raw_string);
    int count = 0;
    string word;
    while (ss >> word) {
        count++;
    }
    cout << count << endl;
    return 0;
}