#include <iostream>
using namespace std;

class test{
    public:
    void speak(){
        cout<<"speaking for test"<<endl;
    }
};

class rest{
    public:
    void speak(){
        cout<<"speaking for rest"<<endl;
    }
};

class vest:public rest , public test{
    public:
};
int main() {
    
    vest v;
    v.test::speak();
    v.rest::speak();

    return 0;
}

// Note:-1.  scope resolution operator (::)
