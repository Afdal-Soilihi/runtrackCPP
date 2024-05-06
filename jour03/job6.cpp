#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int nbSuperieursOuEgauxA5 = 0;

    
    std::cout << "Entrez 10 entiers :\n";
    for (int i = 0; i < taille; ++i) {
        std::cout << "Entier " << (i + 1) << ": ";
        std::cin >> T[i];
        
        if (T[i] >= 5) {
            nbSuperieursOuEgauxA5++;
        }
    }

    
    std::cout << "Nombre d'entiers supérieurs ou égaux à 5 : " << nbSuperieursOuEgauxA5 << std::endl;

    return 0;
}