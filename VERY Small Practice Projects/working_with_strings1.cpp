#include <iostream>
using namespace std;
/*
* This file is going to house some string manipulation practice
*/

// this function prints a string straight up
void print(string a) {
    cout << a;
}

// this function prints a string using a pointer to iterate through each character
void print_ptr(string a) {
    char* a_ptr = &a[0];
    for (int i = 0; i < a.length(); i += 1) {
        cout << *a_ptr << ' ';
        a_ptr += 1;
    }
}

string concatenate(string a, string b) {
    return a + b;
}

string concatenate_ptr(string a, string b) {
    char* b_ptr = &b[0];
    while (*b_ptr != '\0') {
        a += *b_ptr;
    }
    return a;
}

int main() {
    string str_1 = "Hello World";
    string str_2 = "!";
    cout << "The lenght of our string is: " << str_1.length() << '\n';
    cout << "Print: ";
    print_ptr(str_1);
    cout << "Let's add an exclamation point.";
    cout << concatenate(str_1, str_2);
    return 0;
}