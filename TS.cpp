/*************************************************************************
                           TS  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe TS (fichier TS.cpp) ----------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TS.h"

//------------------------------------------------------------- Constantes
#define MAP

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TS::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void TS::Afficher() const
{
#ifdef MAP
    cerr << "Appel à la méthode Afficher de TS" << endl;
#endif
    cout << "de " << depart << " à " << arrivee << " en " << mt << endl;
}


//------------------------------------------------- Surcharge d'opérateurs
//TS & TS::operator = ( const TS & unTS )
//// Algorithme :
////
//{
//} //----- Fin de operator =


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
        : Trajet(villeDepart, villeArrivee), mt(moyenTransp)
// Algorithme :
//
{
#ifdef MAP
    cerr << "Appel au constructeur de TS" << endl;
#endif
} //----- Fin de TS


TS::~TS ( )
// Algorithme :
//
{
#ifdef MAP
    cerr << "Appel au destructeur de TS" << endl;
#endif
} //----- Fin de ~TS


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

