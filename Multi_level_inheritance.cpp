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

class garmanShefered:public Dog{
    public:
    string location;
    
    public:
    void petAnimal(){
        cout<<"garman shfered are pet animal"<<endl;
    }
};

int main() {
  
     garmanShefered d;
     d.age = 30;
     d.color="white";
     d.location = "home";
     d.speak();
     cout<<d.age<<endl;
     cout<<d.color<<endl;
     d.bark();
     cout<<d.location<<endl;
     d.petAnimal();
    return 0;
}
