/*************************************************************************
                           TC  -  Trajet composé
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : emma.neiss@insa-lyon.fr  yann.dupont@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe TC (fichier TC.cpp) ----------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TC.h"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void TC::Afficher() const
{
#ifdef MAP
    cerr << "Appel à la méthode Afficher de TC" << endl;
#endif
    int i;
    for (i = 0; i < nbTS; ++i) {
        if(i != 0){
            cout << "    ";
        }
        sousTrajets[i]->Afficher();
    }
}


//-------------------------------------------- Constructeurs - destructeur
TC::TC ( const TC & unTC )
        : Trajet(unTC.depart, unTC.arrivee), nbTS(unTC.nbTS), sousTrajets(unTC.sousTrajets)
{
#ifdef MAP
    cerr << "Appel au constructeur de copie de TC" << endl;
#endif
} //----- Fin de TC (constructeur de copie)


TC::TC ( const unsigned int nbTrajets , Trajet** const listeTraj)
        : nbTS(nbTrajets), Trajet(listeTraj[0]->getDepart(), listeTraj[nbTrajets-1]->getArrivee())
{
#ifdef MAP
    cerr << "Appel au constructeur de TC" << endl;
#endif
    // initialisation de sousTrajets
    int i;
    sousTrajets = new Trajet* [nbTrajets];    // allocation dynamique -> pas dans la pile
    for (i = 0; i < nbTrajets; ++i) {
        sousTrajets[i] = listeTraj[i];
    }
} //----- Fin de TC


TC::~TC ( )
{
#ifdef MAP
    cerr << "Appel au destructeur de TC" << endl;
#endif

    unsigned int i;
    for (i = 0; i < nbTS ; ++i) {
        delete sousTrajets[i];
    }
    delete[] sousTrajets;
} //----- Fin de ~TC
