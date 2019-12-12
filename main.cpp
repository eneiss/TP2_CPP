
#include "Catalogue.h"
using namespace std;

int main() {

    Catalogue * catalogue = new Catalogue();
    char choix, continuer = 1;

    while(continuer) {
        // Affichage du menu
        cout << endl << "menu" << endl;
        cout << "1: ajouter un trajet" << endl;
        cout << "2: afficher le catalogue des trajets" << endl;
        cout << "3: rechercher dans le catalogue" << endl;
        cout << "0: quitter" << endl;

        cin >> choix;
        cin.ignore(10000, '\n');
        switch (choix) {
            case '0':
                continuer = 0;
                break;
            case '1':
                catalogue->AjouterTrajet();
                break;
            case '2':
                catalogue->Afficher();
                break;
            case '3':
                catalogue->RechercheTrajet();
                break;
            default:
                cout << "Choix incorrect" << endl;
                continue; // revenir au menu
        }
    }
    cout << "Au revoir !" << endl;

    delete catalogue;

    return 0;
}
