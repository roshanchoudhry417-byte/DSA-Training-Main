#include <iostream>
using namespace std;

class students
{
public:
    string name;
    int age;

    students(){
        cout<<"Constructor Invoked..." ;
    }
};

int main()
{
    students s1;
    return 0;
}