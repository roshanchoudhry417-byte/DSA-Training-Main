#include <iostream>
using namespace std;

class students
{

private:
    string name = "Roshan";
    string email = "roshan@example.com";
    int age = 20;

public:
    void getData()
    {
        cout << name << endl;
        cout << email << endl;
        cout << age << endl;
    }

    void setData()
    {
        name = "Roshan";
    }
};

int main()
{
    students s1;
    s1.getData();
    return 0;
}