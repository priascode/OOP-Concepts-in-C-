/*Inheritance two classes parent or super or base class  and   child or sub class or derived class
 child class inherits the properties and methods of parent class
  There are several types of inheritance,
    => single inheritance 
    => multilevel inheritance
    => multiple inheritance(not supported in java but supported in c++ cause diamond problem when two parent class have inherited from same base class)
    => hierarchical inheritance (in this example)
    => hybrid inheriitance (combination of one or more types)
 
 
 
 */

#include <iostream>

using namespace std;
// Abstract class
class AbstractStudent{
    virtual void AskForPromotion()=0;
};

//parent class
class Student:AbstractStudent{   // student class implements abstract class - provide implementation for the above methods
    // encapsulated
protected:
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
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
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

// derived class 1
class EngineeringStudent:public Student{
public:
    string Specialization;
    EngineeringStudent(int id, string name,int age, string specialization):Student(id,name,age){
            Specialization = specialization;
    }
    void KnowMe(){
      cout <<"\n"<< Name <<"is specialized in"<<Specialization;
    }
    

};
// derived class 2
class MedicalStudent:public Student{
  public:
   int NeetScore;
    MedicalStudent(int id, string name,int age, int neetScore):Student(id,name,age){
      NeetScore = neetScore;
    }
    void prescribe(){
      cout <<"\n"<< Name << "is "<<Age<< "student prescribed medicine";
    }
};
int main()
{
    Student student1 = Student(8,"riyaz",19);
    Student student3 = Student(9,"zafi",15);
   
    EngineeringStudent Es = EngineeringStudent(33,"priya",20,"CSE");
    // cout << Es.Specialization;
    // student1.setAge(25);
    // cout<<student1.getAge();
    MedicalStudent Ms = MedicalStudent(23,"moni",19,430);
    Ms.prescribe();
    Ms.AskForPromotion();
    Es.KnowMe();
    Es.AskForPromotion();
    cout<<"\nHello World";

    return 0;
} 