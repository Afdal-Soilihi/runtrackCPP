#include <iostream>

using namespace std;

// Fonction pour générer la suite de Fibonacci jusqu'à une limite donnée
void fibonacci(int limite) {
    int premier = 0, deuxieme = 1, suivant;
    
    cout << "Suite de Fibonacci jusqu'a la limite " << limite << ":" << endl;

    // Afficher les deux premiers termes de la suite
    cout << premier << ", " << deuxieme << ", ";

    // Calculer et afficher les termes suivants jusqu'à la limite
    suivant = premier + deuxieme;
    while (suivant <= limite) {
        cout << suivant << ", ";
        premier = deuxieme;
        deuxieme = suivant;
        suivant = premier + deuxieme;
    }
}

int main() {
    int limite;

    // Demander à l'utilisateur d'entrer la limite
    cout << "Entrez la limite pour la suite de Fibonacci : ";
    cin >> limite;

    // Appeler la fonction fibonacci avec la limite donnée
    fibonacci(limite);

    return 0;
}