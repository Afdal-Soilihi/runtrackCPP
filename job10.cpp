#include <iostream>

int main() {
    // Déclaration des variables
    double prixHTKilo, prixTTC, tauxTVA;
    int nbKilos;

    // Demande à l'utilisateur de saisir le prix HT par kilo
    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prixHTKilo;

    // Demande à l'utilisateur de saisir le nombre de kilos
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nbKilos;

    // Demande à l'utilisateur de saisir le taux de TVA
    std::cout << "Entrez le taux de TVA (en pourcentage) : ";
    std::cin >> tauxTVA;

    // Calcul du prix TTC
    prixTTC = prixHTKilo * nbKilos * (1 + tauxTVA / 100.0);

    // Affichage du prix TTC
    std::cout << "Le prix TTC des carottes est de : " << prixTTC << " euros." << std::endl;

    return 0;
}