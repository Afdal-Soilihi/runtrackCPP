#include <iostream>
#include <string>

int main() {
    // Déclaration et initialisation du tableau fruit
    std::string fruit[] = {"Pomme", "Banane", "Orange", "Fraise", "Kiwi"};
    const int tailleFruit = sizeof(fruit) / sizeof(fruit[0]);

    // Affichage du contenu du tableau fruit
    std::cout << "Contenu du tableau fruit : ";
    for (int i = 0; i < tailleFruit; ++i) {
        std::cout << fruit[i] << " ";
    }
    std::cout << std::endl;

    // Demande du nombre de fruits préférés de l'utilisateur
    int nombreFavoris;
    std::cout << "Entrez le nombre de fruits favoris : ";
    std::cin >> nombreFavoris;

    // Création du tableau favoris de taille nombreFavoris
    std::string* favoris = new std::string[nombreFavoris];

    // Remplissage du tableau favoris par les valeurs saisies par l'utilisateur
    std::cout << "Entrez vos fruits favoris :" << std::endl;
    for (int i = 0; i < nombreFavoris; ++i) {
        std::cin >> favoris[i];
    }

    // Affichage du tableau favoris
    std::cout << "Contenu du tableau favoris : ";
    for (int i = 0; i < nombreFavoris; ++i) {
        std::cout << favoris[i] << " ";
    }
    std::cout << std::endl;

    // Libération de la mémoire allouée dynamiquement pour favoris
    delete[] favoris;

    return 0;
}