#include <iostream>

using namespace std;

int main() {
    int a, b;

    // Demander à l'utilisateur d'entrer les valeurs de a et b
    cout << "Entrez la valeur de a : ";
    cin >> a;
    cout << "Entrez la valeur de b : ";
    cin >> b;

    // Afficher les entiers de a à b en utilisant une boucle while
    int nombre = a; // Initialiser le nombre à a
    while (nombre <= b) {
        cout << nombre << " ";
        nombre++; // Incrémenter le nombre pour passer à l'entier suivant
    }
    cout << endl;

    return 0;
}