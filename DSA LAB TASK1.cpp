#include <iostream>
using namespace std;

int main() {
    int var = 70;
    int* point = &var;
    *point = 30;
    cout << "Variable: " << var << endl;
    cout << "Pointer value: " << *point << endl;
}
