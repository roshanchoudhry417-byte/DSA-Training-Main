#include <iostream>
using namespace std;

int main()
{
    int age = 18, marks = 0;
   cout << "enter your marks" << endl;
    cin >> marks;

    if (marks < 90 && marks >= 95)
    {
        cout << "A+" << endl;
    }
    else if (marks < 80 && marks >= 89)
    {
        cout << "A" << endl;
    }
    else if (marks < 70 && marks >= 79)
    {
        cout << "B" << endl;
    }
    else if (marks < 60 && marks >= 69)
    {
        cout << "c" << endl;
    }
    else if (marks < 50 && marks >= 59)
    {
        cout << "D" << endl;
    }
     else if (marks >=45 && marks < 49){
        
     }

    else
    {
        cout << "you are failed" << endl;
    }
    return 0;
}