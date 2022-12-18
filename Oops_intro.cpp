#include <iostream>
using namespace std;

// creating class with name Hero
class Hero{
    
   
    //   member/properties 
    
     // private:
    public:
    string name;
    int age;
    static int timeToComplete;
    
    // Getter for name
    string getName(){
        return name;
    }
    
    //Getter for age
    int getAge(){
        return age;
    }
    // Setter for name
    void setName(string n){
        name = n;
    }
    
    // Setter for age
    void setAge(int a){
        age = a;
    }
    
    static int random(){
         return timeToComplete;
      }
    
    // default constructor 
    Hero(){
        cout<<"Default Constructor called"<<endl;
        
    }
    
    // parameterized constructor 
    Hero(string name , int age){
        cout<<"parametrrized constructor"<<endl;
        this->name = name;
        this->age = age;
    }
    
    // copy constructor 
    Hero(  Hero &sushant){
        cout<<"copy construcyor called"<<endl;
        this->name = sushant.name;
        this->age = sushant.age;
    }
    
    
};

int Hero:: timeToComplete =10;

int main() {
    
    // creating object with name sushant
       Hero sushant;
     // cout<<" size of class "<<sizeof(sushant)<<endl;
    // sushant.age =30;
    // sushant.name ="ssRajput";
    // cout<<sushant.name<<endl;
    // cout<<sushant.age<<endl;  
    // using getter/setter 
    // sushant.setName("SSrajput");
    // cout<<sushant.getName()<<endl;
    
     // parameterized constructor called 
       Hero sushant("SSrajputana" , 23);  
       cout<<sushant.name<<endl;
       cout<<sushant.age<<endl;
    
    // copy constructor called
     Hero raja(sushant);
    cout<<raja.name<<endl;
    cout<<raja.age<<endl;
    
     //Destructor
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }
    
    // static keyword called with creating object
   cout<<Hero::timeToComplete<<endl;
    
    // static function called without creating object
    cout<<Hero::random();
    return 0;
}



NOTE:1-   static function can be access only static member properties. it can be access without creating object.
