#include <iostream>
#include <cstring>

int main() {
    const int tailleMax = 100; // Taille maximale de la chaîne de caractères
    char tab[tailleMax]; // Tableau pour stocker la chaîne de caractères

    // Demander à l'utilisateur d'entrer une chaîne de caractères
    std::cout << "Entrez une chaîne de caractères : ";
    std::cin.getline(tab, tailleMax); // Utiliser getline pour lire toute la ligne

    // Afficher la chaîne de caractères saisie
    std::cout << "Vous avez saisi : " << tab << std::endl;

    // Afficher les lettres et leur indice dans le tableau
    std::cout << "Les lettres dans le tableau sont : ";
    for (int i = 0; tab[i] != '\0'; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}