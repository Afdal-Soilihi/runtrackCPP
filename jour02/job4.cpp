#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Entrez le premier nombre: ";
    cin >> num1;

    cout << "Entrez l'opération (+, -, *, /): ";
    cin >> operation;

    cout << "Entrez le deuxième nombre: ";
    cin >> num2;

    switch(operation) {
        case '+':
            cout << "Résultat: " << num1 + num2;
            break;
        case '-':
            cout << "Résultat: " << num1 - num2;
            break;
        case '*':
            cout << "Résultat: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Résultat: " << num1 / num2;
            else
                cout << "Erreur: Division par zéro!";
            break;
        default:
            cout << "Opération invalide!";
    }

    return 0;
}