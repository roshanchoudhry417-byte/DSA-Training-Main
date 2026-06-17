#include <iostream>
using namespace std;

class students
{
public:
    string name;
    int age;

    students(string n,  int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    students s1("Roshan", 20);
    cout<<"The name of s1 is;"<<s1.name<<endl;
    cout<<"The age of s1 is;"<<s1.age;
    return 0;
}