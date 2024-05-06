#include <iostream>

int main() {
    
    int a, b, c;

    
    std::cout << "Entrez trois entiers : ";
    std::cin >> a >> b >> c;

    
    if (a >= b && a >= c) {
        std::cout << "Le plus grand entier est : " << a << std::endl;
    } else if (b >= a && b >= c) {
        std::cout << "Le plus grand entier est : " << b << std::endl;
    } else {
        std::cout << "Le plus grand entier est : " << c << std::endl;
    }

    return 0;
}