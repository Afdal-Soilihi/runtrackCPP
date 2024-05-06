#include <iostream>
using namespace std;

int main() {
    // Initialisation du tableau d'entiers
    int tableau[] = {10, 20, 30, 40, 50};

    // Affichage de l'adresse et de la valeur de chaque élément du tableau
    cout << "Adresse et valeur de chaque élément du tableau :" << endl;
    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        cout << "Adresse de tableau[" << i << "] : " << &tableau[i] << ", Valeur : " << tableau[i] << endl;
    }

    return 0;
}