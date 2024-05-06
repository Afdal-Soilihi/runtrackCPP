#include <iostream>
#include <vector>


int sommeElementsPairs(const std::vector<int>& tableau) {
    int somme = 0;
    for (int nombre : tableau) {
        if (nombre % 2 == 0) {  // Vérifier si l'élément est pair
            somme += nombre;    // Ajouter l'élément pair à la somme
        }
    }
    return somme;
}

int main() {
    
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    
    std::vector<int> tableau(taille);
    std::cout << "Entrez les elements du tableau :\n";
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i + 1 << " : ";
        std::cin >> tableau[i];
    }

    
    int sommePairs = sommeElementsPairs(tableau);

    
    std::cout << "La somme des elements pairs du tableau est : " << sommePairs << std::endl;

    return 0;
}