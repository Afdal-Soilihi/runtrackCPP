#include <iostream>

int main() {
    // Créer une variable x contenant l'entier 12
    int x = 12;

    // Afficher la valeur initiale de x
    std::cout << "Valeur initiale de x : " << x << std::endl;

    // Déclarer une référence modifiable à x
    int& referenceX = x;

    // Modifier la valeur de x à travers la référence
    referenceX = 24;

    // Afficher la nouvelle valeur de x
    std::cout << "Nouvelle valeur de x : " << x << std::endl;

    return 0;
}