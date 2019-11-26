/*************************************************************************
                           TC  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TC> (fichier TC.h) ----------------
#if ! defined ( TC_H )
#define TC_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TC>
//
//
//------------------------------------------------------------------------

class TC : public Ancetre
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    TC & operator = ( const TC & unTC );
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

    TC ( const unsigned int nbTrajets = 0 , const Trajet* listeTraj = nullptr);
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
    Trajet* sousTrajets;

};

//-------------------------------- Autres définitions dépendantes de <TC>

#endif // TC_H

