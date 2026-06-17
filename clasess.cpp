#include <iostream>
using namespace std;

class students
{
public:
    string name;
    string email;
    int age;
};




int main()
{
    students s1;
    s1.name = "Roshan";
    s1.email = "roshan@example.com";
    s1.age = 20;
    cout << s1.name << s1.age <<  s1.email;
    return 0;
}