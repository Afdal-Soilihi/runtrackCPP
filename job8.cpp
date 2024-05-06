#include <iostream>

int main() {
    // Déclaration de la variable pour stocker l'année saisie par l'utilisateur
    int annee;

    // Demande à l'utilisateur d'entrer une année
    std::cout << "Entrez une annee : ";
    std::cin >> annee;

    // Vérifie si l'année est bissextile et affiche le résultat
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        std::cout << annee << " est une annee bissextile." << std::endl;
    } else {
        std::cout << annee << " n'est pas une annee bissextile." << std::endl;
    }

    return 0;
}