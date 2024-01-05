// Abstraction - hiding functionalities(complex details ) and showing essential details
// done using abstract class


#include <iostream>

using namespace std;
// Abstract class
class AbstractStudent{
    virtual void AskForPromotion()=0;
}
class Student:AbstractStudent{   // student class implements abstract class - provide implementation for the above methods
    // encapsulated
private:
    int Id;
    string Name;
    int Age;

// use of setters and getters
public: 
    void setId(int id){  //setter
        Id = id;
    }
    int getId(){  //getter
        return Id;
    }
    void setId(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    int setAge(int age){
        Age = age;
    }
    void getAge(){
        return Age;
    }

    void intro(){
        cout << "My Name is:"<<Name;
    }
    Student(int id, string name,int age){
        Id = id;
        Name =name;
        Age = age;
    }

    void AskForPromotion(){
        if(Age >30){
            cout<< Name<<"got promotion";
        }else {
            cout << Name<<"Not promotion wait for sometime";
        }
    }
};

int main()
{
    Student student1 = Student(8,"riyaz",19);
    Student student3 = Student(9,"zafi",15);
   
    student1.intro();
    student3.intro();

    // student1.setAge(25);
    // cout<<student1.getAge();

    student1.AskForPromotion();
    cout<<"\nHello World";

    return 0;
} 