#include <iostream>
using namespace std;

class students
{
public:
    string name;
    int age;

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age<<endl;
    }
};

int main()