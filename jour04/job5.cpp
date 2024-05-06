#include <iostream>
using namespace std;

// Déclaration de la structure Point
struct Point {
    int x;
    int y;
};

int main() {
    // Déclaration d'une variable de type Point
    Point p1;

    // Initialisation des valeurs de la structure p1
    p1.x = 10;
    p1.y = 20;

    // Déclaration d'un pointeur vers la structure Point
    Point *ptrPoint = &p1;

    // Accès aux membres de la structure à travers le pointeur
    ptrPoint->x = 30;
    ptrPoint->y = 40;

    // Affichage des nouvelles valeurs
    cout << "Nouvelles valeurs : " << endl;
    cout << "x = " << ptrPoint->x << ", y = " << ptrPoint->y << endl;

    return 0;
}