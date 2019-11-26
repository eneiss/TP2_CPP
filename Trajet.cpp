/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe Trajet (fichier Trajet.cpp) --------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Trajet::Afficher() const
{
#ifdef MAP
    cout << "Appel à la méthode Afficher de Trajet" << endl;
#endif
}

Ville Trajet::getDepart() const
{
    return this->depart;
}

Ville Trajet::getArrivee() const
{
    return this->arrivee;
}

/*
//------------------------------------------------- Surcharge d'opérateurs
Trajet & Trajet::operator = ( const Trajet & unTrajet )
// Algorithme :
//
{
} //----- Fin de operator =
*/

//-------------------------------------------- Constructeurs - destructeur
Trajet::Trajet ( const Trajet & unTrajet )
                : depart(unTrajet.depart), arrivee(unTrajet.arrivee)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de Trajet" << endl;
#endif
} //----- Fin de Trajet (constructeur de copie)


Trajet::Trajet ( const Ville & villeDepart, const Ville & villeArrivee)
            : depart(villeDepart), arrivee(villeArrivee)
// Passage par ref pour eviter une deuxieme copie des villes
{
#ifdef MAP
    cout << "Appel au constructeur de Trajet" << endl;
#endif
} //----- Fin de Trajet


Trajet::~Trajet ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de Trajet" << endl;
#endif
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

