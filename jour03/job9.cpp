#include <iostream>
#include <string>

bool estIncluse(const std::string& chaine1, const std::string& chaine2) {
    size_t trouve = chaine2.find(chaine1);
    return (trouve != std::string::npos);
}

int main() {
    std::string chaine1, chaine2;
    std::cout << "Entrez la première chaîne de caractères : ";
    std::getline(std::cin, chaine1);
    std::cout << "Entrez la deuxième chaîne de caractères : ";
    std::getline(std::cin, chaine2);
    
    if (estIncluse(chaine1, chaine2)) {
        std::cout << "La première chaîne est incluse dans la deuxième." << std::endl;
    } else {
        std::cout << "La première chaîne n'est pas incluse dans la deuxième." << std::endl;
    }

    return 0;
}