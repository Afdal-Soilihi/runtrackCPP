#include <iostream>
#include <string>

bool verifierFormatHeure(const std::string& heure) {
    
    if (heure.length() != 5) {
        return false;
    }

    
    if (!isdigit(heure[0]) || !isdigit(heure[1]) || heure[2] != 'h' || !isdigit(heure[3]) || !isdigit(heure[4])) {
        return false;
    }

    
    int heures = std::stoi(heure.substr(0, 2));
    int minutes = std::stoi(heure.substr(3, 2));
    if (heures < 0 || heures > 23 || minutes < 0 || minutes > 59) {
        return false;
    }

    return true;
}

int main() {
    std::string heure;
    std::cout << "Entrez une heure au format XXhXX : ";
    std::cin >> heure;

    if (verifierFormatHeure(heure)) {
        std::cout << "Format d'heure valide." << std::endl;
    } else {
        std::cout << "Format d'heure invalide." << std::endl;
    }

    return 0;
}