#include <iostream>
#include <algorithm>

int main() {
    // Demander à l'utilisateur de saisir une chaîne de caractères
    std::string string;
    std::cout << "Entrez une chaîne de caractères : ";
    std::cin >> string;

    
    std::string string2 = "Bonjour";

    
    std::sort(string.begin(), string.end());
    std::sort(string2.begin(), string2.end());

    
    std::cout << "Chaîne 1 triée : " << string << std::endl;
    std::cout << "Chaîne 2 triée : " << string2 << std::endl;

    return 0;
}