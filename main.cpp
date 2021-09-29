#include <iostream>
using namespace std;

class A{
    private: 
    int val;
    public:
    A(){
        val = 1;
    }
};
class B{
    private: 
    int val;
    public:
    B(){
        val = 1;
    }
};

int main() {
    A a;
    B b;
    if(a == b) cout << "a ==b" << endl;
    return 0;
}