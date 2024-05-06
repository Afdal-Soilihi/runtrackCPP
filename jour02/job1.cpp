#include <iostream>
using namespace std;

int main() {
    int n;
    
    do {
        cout << "Entrez un nombre positif : ";
        cin >> n;
    } while (n <= 0);

    cout << "Nombre valide saisi : " << n << endl;

    return 0;
}