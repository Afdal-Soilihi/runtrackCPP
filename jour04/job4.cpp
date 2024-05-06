#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    cout << "Avant modification : " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // Modification des valeurs pointées
    *ptrA = 100;
    *ptrB = 200;
    *ptrC = 300;

    cout << "Après modification : " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}