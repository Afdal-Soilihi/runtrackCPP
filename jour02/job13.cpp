#include <iostream>

using namespace std;

int main() {
    // Boucle pour chaque multiplicateur de 1 à 10
    for (int multiplicateur = 1; multiplicateur <= 10; ++multiplicateur) {
        cout << "Table de multiplication pour " << multiplicateur << " :" << endl;
        
        // Boucle pour chaque nombre de 1 à 10
        for (int nombre = 1; nombre <= 10; ++nombre) {
            // Calcul et affichage du résultat
            cout << multiplicateur << " x " << nombre << " = " << (multiplicateur * nombre) << endl;
        }

        cout << endl; // Ligne vide pour séparer chaque table de multiplication
    }

    return 0;
}