/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : -
*************************************************************************/

//---------- Interface de la classe Trajet (fichier Trajet.h) ------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes
#define MAP
#define MAX_CHAR_VILLE 30
//#define MAX_CHAR_MT 20

//------------------------------------------------------------------ Types
typedef char* Ville;
typedef char* MT;

//------------------------------------------------------------------------
// Rôle de la classe Trajet
// Définir un trajet par ses villes de départ et d'arrivée
//
//------------------------------------------------------------------------

class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques


    Ville getDepart() const;
    // Mode d'emploi :
    // Renvoie la ville de départ du trajet appelant
    // Contrat :
    // Le pointeur renvoyé pointe directement sur la zone
    // mémoire utilisée par l'attribut depart de l'objet

    Ville getArrivee() const;
    // Mode d'emploi :
    // Renvoie la vlile d'arrivée du trajet appelant
    // Contrat :
    //

    virtual void Afficher() const;
    // Mode d'emploi :
    // Affiche les caractéristiques du trajet appelant
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
    // Crée un trajet ayant comme villes de départ et d'arrivée
    // les paramètres formels villeDepart et villeArrivee
    // Contrat :
    // Les villes sont copiées dans une zone mémoire propre à
    // l'objet créé

    Trajet();
    // Mode d'emploi :
    //
    // Contrat :
    //


    virtual ~Trajet ( );
    // Mode d'emploi :
    // Détruit le trajet appelant
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

