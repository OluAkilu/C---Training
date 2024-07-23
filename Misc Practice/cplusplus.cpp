#include <iostream> // this is a header include
using namespace std; // this is a namespace

// this is an example of a function that uses literals
int add(int x, int y) {
    return x + y;
}

// this is an example of function that uses pointers
int add_ptr(int* x, int* y) {
    return *x + *y;
}

// the stuff inside of this function will be ran upon program start
int main() {
    int a = 10;
    int b = 20;
    int* c = &a;
    int* d = &b;
    cout << "Adding " << a << " and " << b << " with first function: " << add(a, b) << "\n";
    cout << "Adding " << a << " and " << b << " with second function: " << add_ptr(c, d);
}