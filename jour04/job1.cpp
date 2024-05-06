#include <iostream>
using namespace std;

int main() {
    int number = 2019;
    int *ptr = &number; // Déclaration d'un pointeur pointant vers la variable number

    cout << "La valeur de number est : " << *ptr << endl;

    return 0;
}