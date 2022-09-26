#include <iostream>
#include <cstring>
using namespace std;

class student
{
private:
    int age;
    char *name;

public:
    int rollno;
    int getAge() // getter function
    {
        return age;
    }
    void setAge(int age) // setter function
    {
        this->age = age; // this holds the address of the current object
    }
    char *getName() // getter function
    {
        return name;
    }
    student(int age, char *name)
    {

        this->age = age;   // this->name = name; //shallow copy (copies the address not the content)

             // Or

        // (*this).age = age;

        /*------------------------------*/

        // deep copy (copies the content)
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void display()
    {
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }
    student(student const &s)
    { // copy constructor
        this->age = s.age;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }
};

int main()
{
    char name[] = "John";
    student s1(20, name);
    s1.display();
    name[3] = 'P';
    student s2(30, name);
    s2.display();
    s1.display();
    delete s1.getName();
    delete s2.getName();

    return 0;
}