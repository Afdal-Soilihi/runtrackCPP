#include <iostream>
using namespace std;

void fusionner(int tab1[], int taille1, int tab2[], int taille2, int resultat[]) {
    int i = 0, j = 0, k = 0;

    while (i < taille1 && j < taille2) {
        if (tab1[i] < tab2[j]) {
            resultat[k++] = tab1[i++];
        } else {
            resultat[k++] = tab2[j++];
        }
    }

    while (i < taille1) {
        resultat[k++] = tab1[i++];
    }

    while (j < taille2) {
        resultat[k++] = tab2[j++];
    }
}

int main() {
    int tab1[] = {1, 3, 5, 7, 9};
    int taille1 = sizeof(tab1) / sizeof(tab1[0]);
    
    int tab2[] = {2, 4, 6, 8, 10};
    int taille2 = sizeof(tab2) / sizeof(tab2[0]);
    
    int resultat[taille1 + taille2];

    fusionner(tab1, taille1, tab2, taille2, resultat);

    cout << "Tableau fusionne : ";
    for (int i = 0; i < taille1 + taille2; i++) {
        cout << resultat[i] << " ";
    }
    cout << endl;

    return 0;
}
