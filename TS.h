/*************************************************************************
                           TS  -  description
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : -
*************************************************************************/

//---------- Interface de la classe TS (fichier TS.h) --------------------
#include "Trajet.h"

#if ! defined ( TS_H )
#define TS_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe TS
//
//
//------------------------------------------------------------------------

class TS : public Trajet
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
    TS ( const TS & unTS );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    TS ( const Ville & villeDepart, const Ville & villeArrivee, const MT & moyenTransp);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TS ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    MT mt;

};

//-------------------------------- Autres définitions dépendantes de TS

#endif // TS_H

