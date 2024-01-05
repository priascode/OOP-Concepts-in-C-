/* use of constructors(method) to assign values to the objects while creating - it reduce code  construct object with values passed to it
rules for constructor:
    1. do not have return type
    2. name must be same as class name
    3. it must be public*/

#include <iostream>

using namespace std;
class Student{
public:
    int Id;
    string Name;
    int Age;
    Output:


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
    cout<<"\nHello World";

    return 0;
}
