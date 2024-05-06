#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Structure pour stocker une note
struct Note {
    string nom;
    string prenom;
    double note;
};

// Fonction pour ajouter une note à la liste
void ajouterNote(vector<Note>& listeNotes) {
    Note nouvelleNote;
    cout << "Entrez le nom de l'etudiant : ";
    cin >> nouvelleNote.nom;
    cout << "Entrez le prenom de l'etudiant : ";
    cin >> nouvelleNote.prenom;
    cout << "Entrez la note de l'etudiant : ";
    cin >> nouvelleNote.note;
    listeNotes.push_back(nouvelleNote);
    cout << "Note ajoutee avec succes !" << endl;
}

// Fonction pour afficher la liste de notes
void afficherListeNotes(const vector<Note>& listeNotes) {
    cout << "Liste des notes :" << endl;
    for (const auto& note : listeNotes) {
        cout << note.nom << " " << note.prenom << " : " << note.note << endl;
    }
}

// Fonction pour supprimer une note d'un etudiant
void supprimerNote(vector<Note>& listeNotes) {
    string nom, prenom;
    cout << "Entrez le nom de l'etudiant dont vous voulez supprimer la note : ";
    cin >> nom;
    cout << "Entrez le prenom de l'etudiant : ";
    cin >> prenom;
    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            it = listeNotes.erase(it);
            cout << "Note supprimee avec succes !" << endl;
            return;
        }
    }
    cout << "Aucune note trouvee pour cet etudiant." << endl;
}

// Fonction pour calculer la moyenne des notes
void calculerMoyenne(const vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste des notes est vide." << endl;
        return;
    }
    double somme = 0;
    for (const auto& note : listeNotes) {
        somme += note.note;
    }
    double moyenne = somme / listeNotes.size();
    cout << "La moyenne des notes est : " << fixed << setprecision(2) << moyenne << endl;
}

int main() {
    vector<Note> listeNotes;
    int choix;
    do {
        cout << "\nMenu :\n1. Ajouter une note\n2. Afficher la liste de notes\n3. Supprimer une note\n4. Afficher la moyenne des notes\n5. Quitter\nChoix : ";
        cin >> choix;
        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                calculerMoyenne(listeNotes);
                break;
            case 5:
                cout << "Fin du programme." << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez reessayer." << endl;
        }
    } while (choix != 5);

    return 0;
}