#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "Avant l'échange : a = " << a << ", b = " << b << endl;

    int *ptr_a = &a;
    int *ptr_b = &b;

    // Échange des valeurs à travers les pointeurs
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    cout << "Après l'échange : a = " << a << ", b = " << b << endl;

    return 0;
}