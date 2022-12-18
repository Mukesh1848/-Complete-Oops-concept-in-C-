#include <iostream>
using namespace std;

// single inheritance 

class Animal{
    
    public:
    string name;
    int age;
    
    public:
    
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    string color;
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

int main() {
  
     Dog d;
     d.age = 30;
     d.speak();
     cout<<d.age<<endl;
     d.bark();
    return 0;
}
