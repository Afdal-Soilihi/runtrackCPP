#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialisation du tableau avec des pointeurs vers différents types de données
    int entier = 2019;
    string chaine1 = "La Plateforme";
    double flottant = 3.14;
    string chaine2 = "Étudiants";

    // Affichage de l'adresse et de la valeur de chaque élément du tableau
    cout << "Adresse et valeur de chaque élément du tableau :" << endl;
    cout << "Adresse de entier : " << &entier << ", Valeur : " << entier << endl;
    cout << "Adresse de chaine1 : " << &chaine1 << ", Valeur : " << chaine1 << endl;
    cout << "Adresse de flottant : " << &flottant << ", Valeur : " << flottant << endl;
    cout << "Adresse de chaine2 : " << &chaine2 << ", Valeur : " << chaine2 << endl;

    return 0;
}