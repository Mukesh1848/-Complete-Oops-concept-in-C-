#include <iostream>
using namespace std;

class test{
    
    private:
    int age;
    public:
    string name;
    
    public:
    
    int getAge(){
        return age;
    }
    
    void setAge(int age){
        this->age = age;
    }
    
    void speak(){
        cout<<" speaking about encapsulation"<<endl;
    }
    
};

int main() {
  
  test t;
  t.setAge(23);
  t.name = "Mukesh";
  
  cout<<t.getAge()<<endl;
  cout<<t.name<<endl;
  
    return 0;
}
