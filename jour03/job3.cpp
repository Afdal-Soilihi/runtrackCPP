#include <iostream>
#include <string>

int main() {
    std::string chaine1 = "Bonjour";
    std::string chaine2 = "Bonjour";

    // Comparer les chaînes
    if (chaine1 == chaine2) {
        std::cout << "Les chaines sont egales." << std::endl;
        return 0;
    } else {
        std::cout << "Les chaines ne sont pas egales." << std::endl;
        return 1;
    }
}