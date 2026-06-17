#include <iostream>
using namespace std;

class students
{
public:
    string name;
    int age;

    students(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age<<endl;
    }

    void show(){
        cout<<this;
    }
};

int main()
{
    students s1("Roshan", 20);
    s1.display();
    s1.show();
    return 0;
}