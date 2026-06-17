#include <iostream>
using namespace std;

int charge(int x) {
    x = 10;
    cout << "Value of x inside function: "<<x<<endl;
}

int main() 
{
    int a=0;
    charge(a);
    cout<< "value of a inside main: "<<a<<endl;
    return 0;
}
