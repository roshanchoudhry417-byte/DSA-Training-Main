#include <iostream>
using namespace std;

// void greet() {
//     cout<<"Hello Roshan!"<<endl;
// }

// int funt(int x ,int y) {
//     return x+y;
// }
// int main()
// {
//     // greet("Roshan");
//     // greet("Dummy");
//     cout<<funt(10, 20)<<endl;
//     return 0;
// }



int add(int a, int b) {
    return a+b;
}

// int main()
// {
//     int x = 10, y = 20;
//     cout<<add(x, y)<<endl;
//     return 0;
// }

int subtract(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
    return a*b;
}

int divide(int a, int b) {
    return a/b;
}

int rem(int a, int b) {
    return a%b;
}
int main() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Addition: "<<add(a, b)<<endl;
    cout<<"Subtraction: "<<subtract(a, b)<<endl;
    cout<<"Multiplication: "<<multiply(a, b)<<endl;
    cout<<"Division: "<<divide(a, b)<<endl;
    cout<<"Remainder: "<<rem(a, b)<<endl;
}