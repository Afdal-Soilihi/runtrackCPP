#include <iostream>

int main() {
    int n;
    std::cout << "Entrez un nombre : ";
    std::cin >> n;

    switch(n) {
        case 0:
            std::cout << "Nul\n";
            break;
        case 1:
        case 2:
            std::cout << "Petit\n";
            break;
        case 3:
        case 4:
        case 5:
            std::cout << "Moyen\n";
            break;
        default:
            std::cout << "Grand\n";
    }

    return 0;
}