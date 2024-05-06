#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string phrase = "vive la plateforme !";

    // Parcourir la chaîne et convertir chaque caractère en majuscule
    for (char &c : phrase) {
        c = std::toupper(c);
    }

    // Afficher la chaîne transformée
    std::cout << phrase << std::endl;

    return 0;
}