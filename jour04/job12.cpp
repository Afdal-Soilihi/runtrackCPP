#include <iostream>
#include <string>

// Déclaration de la structure Staff
struct Staff {
    std::string nom;
    std::string prenom;
};

// Déclaration de la structure Etudiant
struct Etudiant {
    std::string nom;
    std::string prenom;
};

int main() {
    // Création et initialisation des membres du personnel
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    // Affichage des prénoms des membres du personnel
    std::cout << "Prénoms des membres du personnel :" << std::endl;
    std::cout << alicia.prenom << std::endl;
    std::cout << pierre.prenom << std::endl;

    // Création et saisie des informations des étudiants
    Etudiant etudiant1, etudiant2;
    std::cout << "Entrez le nom et le prénom du premier étudiant : ";
    std::cin >> etudiant1.nom >> etudiant1.prenom;
    std::cout << "Entrez le nom et le prénom du deuxième étudiant : ";
    std::cin >> etudiant2.nom >> etudiant2.prenom;

    // Affichage des prénoms des étudiants
    std::cout << "Prénoms des étudiants :" << std::endl;
    std::cout << etudiant1.prenom << std::endl;
    std::cout << etudiant2.prenom << std::endl;

    return 0;
}