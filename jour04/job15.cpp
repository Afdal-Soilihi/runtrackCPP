#include <iostream>

int main() {
    // Création du tableau
    int tableau[] = {1, 2, 3, 4, 5};

    // Parcours du tableau avec des références
    for (int& valeur : tableau) {
        // Affichage de la valeur
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    return 0;
}