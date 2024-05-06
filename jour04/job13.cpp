#include <iostream>
#include <string>
#include <vector>

// Déclaration de la structure Destination
struct Destination {
    std::string nom;
    int tempsDeVol;
};

int main() {
    // Déclaration du conteneur vector de pointeurs vers des structures Destination
    std::vector<Destination*> destinations;

    // Demander à l'utilisateur de saisir les destinations et leurs temps de vol depuis Marseille
    std::cout << "Entrez une destination et son temps de vol depuis Marseille (en heures), ou tapez 'fin' pour terminer :" << std::endl;
    std::string nomDestination;
    int tempsDeVol;

    while (true) {
        std::cout << "Destination : ";
        std::cin >> nomDestination;
        if (nomDestination == "fin") {
            break; // Sortir de la boucle si l'utilisateur entre "fin"
        }
        std::cout << "Temps de vol (heures) : ";
        std::cin >> tempsDeVol;

        // Création d'une nouvelle destination
        Destination* nouvelleDestination = new Destination;
        nouvelleDestination->nom = nomDestination;
        nouvelleDestination->tempsDeVol = tempsDeVol;

        // Ajout du pointeur vers la nouvelle destination dans le vector
        destinations.push_back(nouvelleDestination);
    }

    // Parcourir le conteneur vector, afficher et modifier les données de chaque destination
    for (Destination* destinationPtr : destinations) {
        std::cout << "Destination : " << destinationPtr->nom << ", Temps de vol : " << destinationPtr->tempsDeVol << " heures" << std::endl;

        // Modifier les données de la destination
        int nouveauTempsDeVol;
        std::cout << "Nouveau temps de vol (heures) pour " << destinationPtr->nom << " : ";
        std::cin >> nouveauTempsDeVol;
        destinationPtr->tempsDeVol = nouveauTempsDeVol;
    }

    // Libérer la mémoire allouée dynamiquement pour chaque destination
    for (Destination* destinationPtr : destinations) {
        delete destinationPtr;
    }

    return 0;
}