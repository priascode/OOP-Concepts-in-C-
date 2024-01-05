// Polymorphism - Poly means many , morph means forms
// one method or attribute of an object can be exists in many forms


#include <iostream>

using namespace std;
// Abstract class
class AbstractStudent{
    virtual void AskForPromotion()=0;
};
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
     // Here study can be different forms->Polymorphism
    virtual void study(){
      cout << Name << " is studying ";
    }
};

class EngineeringStudent:public Student{
public:
    string Specialization;
    EngineeringStudent(int id, string name,int age, string specialization):Student(id,name,age){
            Specialization = specialization;
    }
    void KnowMe(){
      cout <<"\n"<< Name <<"is specialized in"<<Specialization;
    }
    // Here study can be different forms->Polymorphism
    void study(){
      cout << Name << " is studying "<<Specialization;
    }
    

};

class MedicalStudent:public Student{
  public:
   int NeetScore;
    MedicalStudent(int id, string name,int age, int neetScore):Student(id,name,age){
      NeetScore = neetScore;
    }
    void prescribe(){
      cout <<"\n"<< Name << "is "<<Age<< "student prescribed medicine";
    }
     // Here study can be different forms->Polymorphism
     void study(){
      cout << Name << " is studying "<<"medicine";
    }
};
int main()
{
   
    EngineeringStudent Es = EngineeringStudent(33,"priya",20,"CSE");
    // cout << Es.Specialization;
    // student1.setAge(25);
    // cout<<student1.getAge();
    MedicalStudent Ms = MedicalStudent(23,"moni",19,430);
    // Ms.prescribe();
    // Ms.AskForPromotion();
    // Es.KnowMe();
    // Es.AskForPromotion();
    // Polymorphism  
    // one note:- most common use of Polymorphism is when parent class reference is used to refer child class object
    Student* s1 = &Es;
    Student* s2 = &Ms;
    
    s1->study();// Es.study();
    s2->study();// Ms.study();
   

    return 0;
} 