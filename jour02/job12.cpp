#include <iostream>

using namespace std;

double sommeHarmonique(int n) {
    double somme = 0.0;

    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }

    return somme;
}

int main() {
    int n;

    cout << "Entrez la valeur de n : ";
    cin >> n;

    if (n <= 0) {
        cout << "n doit être un entier positif." << endl;
    } else {
        double resultat = sommeHarmonique(n);
        cout << "La somme des " << n << " premiers termes de la série harmonique est : " << resultat << endl;
    }

    return 0;
}