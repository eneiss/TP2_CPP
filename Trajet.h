/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : -
*************************************************************************/

//---------- Interface de la classe Trajet (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes
#define MAP
//#define MAX_CHAR_VILLE 30
//#define MAX_CHAR_MT 20

//------------------------------------------------------------------ Types
//typedef char Ville[MAX_CHAR_VILLE];
//typedef char MT[MAX_CHAR_MT];
typedef char* Ville;
typedef char* MT;

//------------------------------------------------------------------------
// Rôle de la classe Trajet
//
//
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    Ville getDepart() const;

    Ville getArrivee() const;

    virtual void Afficher() const;
    // Methode virtuelle pure -> a redef dans les classes filles

//------------------------------------------------- Surcharge d'opérateurs
    // Trajet & operator = ( const Trajet & unTrajet );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Trajet ( const Trajet & unTrajet );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Trajet ( const Ville & villeDepart, const Ville & villeArrivee);
    // Mode d'emploi :
    //
    // Contrat :
    //

    Trajet();
    // constructeur par defaut

    virtual ~Trajet ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    Ville depart;
    Ville arrivee;

};

//-------------------------------- Autres définitions dépendantes de Trajet

#endif // TRAJET_H

