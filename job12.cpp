#include <iostream>

int main() {
    int sum = 0; // Variable pour stocker la somme des entiers
    int num; // Variable pour stocker chaque entier saisi

    // Demander à l'utilisateur de saisir cinq entiers
    std::cout << "Entrez cinq entiers : " << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cin >> num;
        sum += num; // Ajouter chaque entier à la somme
    }

    // Calculer la moyenne en divisant la somme par 5
    double moyenne = static_cast<double>(sum) / 5;

    // Afficher la moyenne
    std::cout << "La moyenne des cinq entiers est : " << moyenne << std::endl;

    return 0;
}