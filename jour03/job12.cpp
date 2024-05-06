#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Initialisation du générateur de nombres aléatoires

    const int MIN = 0;
    const int MAX = 100;
    const int MAX_CHANCES = 5; // Nombre maximum de tentatives

    int nombreMystere = rand() % (MAX - MIN + 1) + MIN; // Nombre mystère à deviner
    int tentative;
    int chances = MAX_CHANCES;

    cout << "Bienvenue dans le jeu du Nombre Mystere !" << endl;
    cout << "Devinez le nombre mystere compris entre 0 et 100." << endl;
    cout << "Vous avez " << MAX_CHANCES << " chances pour trouver le nombre." << endl;

    while (chances > 0) {
        cout << "Il vous reste " << chances << " tentative(s)." << endl;
        cout << "Entrez votre proposition : ";
        cin >> tentative;

        if (tentative < nombreMystere) {
            cout << "Trop petit !" << endl;
        } else if (tentative > nombreMystere) {
            cout << "Trop grand !" << endl;
        } else {
            cout << "Felicitation ! Vous avez trouve le nombre mystere : " << nombreMystere << endl;
            return 0; // Fin du programme
        }

        chances--;
    }

    cout << "Vous avez epuise toutes vos chances. Le nombre mystere etait : " << nombreMystere << endl;
    return 0;
}