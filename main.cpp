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
    //Re: b == b
    bool operator ==(const B& b){
        return val == b.val;
    }
    friend bool operator ==(const A& a, const B& b);
};

//Re: a == b
bool operator ==(const A& a, const B& b){
    return a.val == b.val;
}
//Re: b == a
bool operator ==(const B& b, const A& a){
    return a == b;
}


int main() {
    A a;
    B b;
    if(a == b) cout << "a == b" << endl;
    if (b == a) cout << "b == a" << endl;
    if (b == b) cout << "b == b" << endl;
    return 0;
}