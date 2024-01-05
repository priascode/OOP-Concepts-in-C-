/*use of classes to create object with attributes and methods(behaviour) use of access modifier public*/


#include <iostream>

using namespace std;
class Student{
public:
    int id;
    string name;
    int age;
    
    void intro(){
        cout << "My Name is:"<<name;
    }
};

int main()
{
    Student student1;
    student1.name="riyaz";
    student1.id=9;
    student1.age = 19;
    student1.intro();
    cout<<"\nHello World";

    return 0;
}