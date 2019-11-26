/*************************************************************************
                           TC  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe TC (fichier TC.cpp) ----------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TC.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TC::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
TC & TC::operator = ( const TC & unTC )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
TC::TC ( const TC & unTC )
        : Trajet(unTC.depart, unTC.arrivee), nbTS(unTC.nbTS), sousTrajets(unTC.sousTrajets)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de TC" << endl;
#endif
} //----- Fin de TC (constructeur de copie)


TC::TC ( const unsigned int nbTrajets , Trajet** const listeTraj)
        : nbTS(nbTrajets), Trajet(listeTraj[0]->getDepart(), listeTraj[nbTrajets-1]->getArrivee())
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de TC" << endl;
#endif
    // initialisation de sousTrajets
    int i;
    sousTrajets = new Trajet* [nbTrajets];    // allocation dynamique -> pas dans la pile
    for (i = 0; i < nbTrajets; ++i) {
        sousTrajets[i] = listeTraj[i];
    }
} //----- Fin de TC


TC::~TC ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de TC" << endl;
#endif

    int i;
    for (i = 0; i < nbTS ; ++i) {
        delete[] sousTrajets[i];
    }
    delete[] sousTrajets;
} //----- Fin de ~TC


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

