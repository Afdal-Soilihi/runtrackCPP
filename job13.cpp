#include <iostream>

int main() {
    int N;
    long long somme = 0; // Utiliser un long long pour stocker la somme afin d'éviter les dépassements d'entiers

    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    // Calculer la somme des cubes de 5^3 à N^3
    for (int i = 5; i <= N; ++i) {
        somme += i * i * i;
    }

    // Afficher la somme calculée
    std::cout << "La somme des cubes de 5^3 à " << N << "^3 est : " << somme << std::endl;

    return 0;
}