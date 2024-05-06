#include <iostream>

int trouverMax(int tableau[], int taille) {
    // Vérifier si le tableau est vide
    if (taille == 0) {
        std::cerr << "Le tableau est vide !" << std::endl;
        return -1; // Valeur d'erreur
    }

    // Initialiser la valeur maximale à la première valeur du tableau
    int max = tableau[0];

    // Parcourir le tableau pour trouver la valeur maximale
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    return max;
}

int main() {
    // Exemple d'utilisation
    int tableau[] = {5, 9, 2, 7, 1, 8, 6, 3, 4};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int maximum = trouverMax(tableau, taille);
    std::cout << "La valeur maximale dans le tableau est : " << maximum << std::endl;

    return 0;
}