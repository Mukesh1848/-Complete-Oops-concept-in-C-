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

class garmanShefered:public Animal{
    public:
    string location;
    
    public:
    void petAnimal(){
        cout<<"garman shfered are pet animal"<<endl;
    }
};

int main() {
  
     garmanShefered g;
     g.speak();
     g.petAnimal();
     
     Dog d;
     d.speak();
     d.bark();
    return 0;
}
