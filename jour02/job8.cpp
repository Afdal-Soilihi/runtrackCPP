#include <iostream>

using namespace std;

int main() {
    int nombre, a, b;

    // Demander à l'utilisateur d'entrer les valeurs de a et b
    cout << "Entrez la valeur de a : ";
    cin >> a;
    cout << "Entrez la valeur de b : ";
    cin >> b;

    // Demander à l'utilisateur d'entrer un nombre
    cout << "Entrez un entier : ";
    cin >> nombre;

    // Vérifier si le nombre est entre a et b
    if (nombre >= a && nombre <= b) {
        cout << "GAGNE" << endl;
    } else {
        cout << "PERDU" << endl;
    }

    return 0;
}