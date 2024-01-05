/*Encapsulation- binging data and methods into a class(private) to prevent access or modify by another class
 this can be achieved using setters and getters*/

 #include <iostream>

using namespace std;
class Student{
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
};

int main()
{
    Student student1 = Student(8,"riyaz",19);
    Student student3 = Student(9,"zafi",15);
    // student1.name="riyaz";
    // student1.id=9;
    // student1.age = 19;
    student1.intro();
    student3.intro();

    student1.setAge(25);
    cout<<student1.getAge();
    cout<<"\nHello World";

    return 0;
} 