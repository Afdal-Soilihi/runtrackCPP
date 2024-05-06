#include <iostream>
#include <cmath>

using namespace std;

// Fonction pour calculer le nombre de chiffres dans un nombre
int nombreChiffres(int nombre) {
    int count = 0;
    while (nombre != 0) {
        nombre /= 10;
        ++count;
    }
    return count;
}

// Fonction pour vérifier si un nombre est narcissique ou non
bool estNarcissique(int nombre) {
    int nombreOriginal = nombre;
    int puissance = nombreChiffres(nombre);
    int somme = 0;

    // Calcul de la somme des puissances des chiffres
    while (nombre != 0) {
        int chiffre = nombre % 10;
        somme += pow(chiffre, puissance);
        nombre /= 10;
    }

    // Si la somme des puissances des chiffres est égale au nombre d'origine, c'est un nombre narcissique
    return somme == nombreOriginal;
}

int main() {
    int nombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    if (estNarcissique(nombre)) {
        cout << nombre << " est un nombre narcissique." << endl;
    } else {
        cout << nombre << " n'est pas un nombre narcissique." << endl;
    }

    return 0;
}