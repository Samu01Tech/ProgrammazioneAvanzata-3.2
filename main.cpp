#include <iostream>
using namespace std;

class B;

class A{
    private: 
    int val;
    public:
    A(){
        val = 1;
    }
    friend bool operator ==(const A& a, const B& b);
};
class B{
    private: 
    int val;
    public:
    B(){
        val = 1;
    }
    friend bool operator ==(const A& a, const B& b);
};

bool operator ==(const A& a, const B& b){
    return a.val == b.val;
}

int main() {
    A a;
    B b;
    if(a == b) cout << "a == b" << endl;
    //if (b == a) cout << "b == a" << endl;
    return 0;
}