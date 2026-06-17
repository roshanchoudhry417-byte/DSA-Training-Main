#include <iostream>
using namespace std;

int y =20; // global variable(lower priority)

int main()

{
    int y = 20; // local variable
    cout <<::y << endl; // global variable(lower priority)
    return 0;
}