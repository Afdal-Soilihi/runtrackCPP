#include <iostream>

int main() {
    // Déclaration des variables
    int n, m, temp;

    // Demande à l'utilisateur de saisir les valeurs de n et m
    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;
    std::cout << "Entrez la valeur de m : ";
    std::cin >> m;

    // Affichage des valeurs avant l'échange
    std::cout << "Avant l'echange :\n";
    std::cout << "n = " << n << ", m = " << m << std::endl;

    // Échange des valeurs de n et m en utilisant une variable temporaire
    temp = n;
    n = m;
    m = temp;

    // Affichage des valeurs après l'échange
    std::cout << "Apres l'echange :\n";
    std::cout << "n = " << n << ", m = " << m << std::endl;

    return 0;
}