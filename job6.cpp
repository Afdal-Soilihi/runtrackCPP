#include <iostream>

int main() {
    // Déclaration de la variable pour stocker l'entier donné par l'utilisateur
    int entier;
    
    // Demande à l'utilisateur d'entrer un entier
    std::cout << "Entrez un entier : ";
    std::cin >> entier;
    
    // Affichage de la table de multiplication pour l'entier donné
    std::cout << "Table de multiplication de " << entier << " : " << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << entier << " x " << i << " = " << (entier * i) << std::endl;
    }
    
    return 0;
}