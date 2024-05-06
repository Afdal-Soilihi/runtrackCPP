#include <iostream>
using namespace std;

int main() {
    // Déclaration et initialisation des variables
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    char caractere[] = "La Plateforme";

    // Affichage des adresses mémoire et des valeurs des variables
    cout << "Adresse et valeur de entier : " << &entier << ", " << entier << endl;
    cout << "Adresse et valeur de flottant : " << &flottant << ", " << flottant << endl;
    cout << "Adresse et valeur de reel : " << &reel << ", " << reel << endl;
    cout << "Adresse et valeur de caractere : " << (void *)caractere << ", " << caractere << endl;

    return 0;
}