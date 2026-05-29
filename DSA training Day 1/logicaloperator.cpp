#include <iostream>
using namespace std;
int main()
{
     int con1 = (10 > 20);
     int con2 = (10 < 20); 
    cout << (con1 && con2) << endl;
    cout << (con1 || con2) << endl;
    cout << (!con1) << endl;
    return 0;
}