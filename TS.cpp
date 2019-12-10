/*************************************************************************
                           TS  -  description
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : -
*************************************************************************/

//---------- Réalisation de la classe TS (fichier TS.cpp) ----------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TS.h"

//------------------------------------------------------------- Constantes
#define MAP

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void TS::Afficher() const
{
#ifdef MAP
    cerr << "Appel à la méthode Afficher de TS" << endl;
#endif
    cout << "de " << depart << " à " << arrivee << " en " << mt << endl;
}

//-------------------------------------------- Constructeurs - destructeur
TS::TS ( const TS & unTS )
        : Trajet(unTS.depart, unTS.arrivee), mt(unTS.mt)
// Algorithme :
//
{
#ifdef MAP
    cerr << "Appel au constructeur de copie de TS" << endl;
#endif
} //----- Fin de TS (constructeur de copie)


TS::TS ( const Ville & villeDepart, const Ville & villeArrivee, const MT & moyenTransp)
        : Trajet(villeDepart, villeArrivee)
// Algorithme :
//
{
#ifdef MAP
    cerr << "Appel au constructeur de TS" << endl;
#endif

    mt = new char[strlen(moyenTransp) + 1];
    unsigned int i;
    for (i = 0; i < strlen(moyenTransp) + 1; ++i) {
        mt[i] = moyenTransp[i];
    }
} //----- Fin de TS


TS::~TS ( )
// Algorithme :
//
{
#ifdef MAP
    cerr << "Appel au destructeur de TS" << endl;
#endif

    delete[] mt;
} //----- Fin de ~TS


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

