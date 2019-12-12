/*************************************************************************
                           Trajet  -  trajet
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : emma.neiss@insa-lyon.fr  yann.dupont@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe Trajet (fichier Trajet.cpp) --------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void Trajet::Afficher() const
{
#ifdef MAP
    cerr << "Appel à la méthode Afficher de Trajet" << endl;
#endif
    cout << "Trajet de " << depart << " à " << arrivee << endl;
}

Ville Trajet::getDepart() const
{
#ifdef MAP
    cerr << "Appel à la méthode getDepart de Trajet" << endl;
#endif
    return this->depart;
}

Ville Trajet::getArrivee() const
{
#ifdef MAP
    cerr << "Appel à la méthode getArrivee de Trajet" << endl;
#endif
    return this->arrivee;
}

//-------------------------------------------- Constructeurs - destructeur
Trajet::Trajet ( const Trajet & unTrajet )
        : Trajet(unTrajet.getDepart(), unTrajet.getArrivee())
{
#ifdef MAP
    cerr << "Appel au constructeur de copie de Trajet" << endl;
#endif
} //----- Fin de Trajet (constructeur de copie)


Trajet::Trajet ( const Ville & villeDepart, const Ville & villeArrivee)
// Passage par ref pour eviter une deuxieme copie des villes
{
#ifdef MAP
    cerr << "Appel au constructeur de Trajet" << endl;
#endif

    depart = new char[strlen(villeDepart) + 1]; // pour le \0
    arrivee = new char[strlen(villeArrivee) + 1];

    unsigned int i;
    for (i = 0; i < strlen(villeDepart) + 1; ++i) { // copie du \0 aussi
        depart[i] = villeDepart[i];
    }
    for (i = 0; i < strlen(villeArrivee) + 1; ++i) { // copie du \0 aussi
        arrivee[i] = villeArrivee[i];
    }

} //----- Fin de Trajet


Trajet::Trajet()
{
#ifdef MAP
    cerr << "Appel au constructeur par défaut de Trajet" << endl;
#endif
    depart = new char[MAX_CHAR_VILLE];
    arrivee = new char[MAX_CHAR_VILLE];
}

Trajet::~Trajet ( )
// Destruction des objets créés dynamiquement
{
#ifdef MAP
    cerr << "Appel au destructeur de Trajet" << endl;
#endif
    delete[] depart;
    delete[] arrivee;

} //----- Fin de ~Trajet
