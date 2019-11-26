/*************************************************************************
                           TS  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TS> (fichier TS.h) ----------------
#include "Trajet.h"

#if ! defined ( TS_H )
#define TS_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
typedef string MT;

//------------------------------------------------------------------------
// Rôle de la classe <TS>
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

//------------------------------------------------- Surcharge d'opérateurs
//    TS & operator = ( const TS & unTS );
//    // Mode d'emploi :
//    //
//    // Contrat :
//    //


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

    string mt;

};

//-------------------------------- Autres définitions dépendantes de <TS>

#endif // TS_H

