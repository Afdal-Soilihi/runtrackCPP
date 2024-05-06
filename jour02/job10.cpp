#include <iostream>
#include <cmath> // Pour utiliser la fonction sqrt()

using namespace std;

int main() {
    double nombre;

    // Demander à l'utilisateur d'entrer un nombre
    cout << "Entrez un nombre (0 pour quitter) : ";
    cin >> nombre;

    while (nombre != 0) {
        if (nombre < 0) {
            cout << "Veuillez entrer un nombre positif ou égal à zéro." << endl;
        } else {
            // Calculer la racine carrée et l'afficher
            double racine = sqrt(nombre);
            cout << "La racine carrée de " << nombre << " est : " << racine << endl;
        }

        // Demander à l'utilisateur d'entrer un nouveau nombre
        cout << "Entrez un nombre (0 pour quitter) : ";
        cin >> nombre;
    }

    cout << "Programme terminé." << endl;

    return 0;
}