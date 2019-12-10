/*************************************************************************
                           TC  -  description
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : -
*************************************************************************/

//---------- Interface de la classe TC (fichier TC.h) --------------------
#if ! defined ( TC_H )
#define TC_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe TC
//
//
//------------------------------------------------------------------------

class TC : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void Afficher() const;
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    TC ( const TC & unTC );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TC ( unsigned int nbTrajets = 0, Trajet** listeTraj = nullptr);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TC ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    unsigned int nbTS;
    Trajet **sousTrajets;

};

//-------------------------------- Autres définitions dépendantes de TC

#endif // TC_H

