#include <iostream>
#include <cstring>
using namespace std;

void inverseChaine(char *chaine) {
    int longueur = strlen(chaine);
    char *debut = chaine;
    char *fin = chaine + longueur - 1;

    while (debut < fin) {
        // Échange des caractères aux extrémités
        char temp = *debut;
        *debut = *fin;
        *fin = temp;

        // Déplacement des pointeurs vers le milieu
        debut++;
        fin--;
    }
}

int main() {
    const int MAX_TAILLE = 100;
    char chaine[MAX_TAILLE];

    cout << "Entrez une chaine de caracteres : ";
    cin.getline(chaine, MAX_TAILLE);

    // Inversion de la chaine
    inverseChaine(chaine);

    cout << "Chaine inverse : " << chaine << endl;

    return 0;
}