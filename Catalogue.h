/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//------- Interface de la classe <Catalogue> (fichier Catalogue.h) -------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

//--------------------------------------------------- Interfaces utilisées
#include <iostream>
#include <cstring>
#include "Trajet.h"

//------------------------------------------------------------- Constantes
static unsigned int TAILLEDEFAUT = 10;

//------------------------------------------------------------------ Types
using namespace std; // a bouger dans Trajet.h
typedef string Ville;
typedef string MT;

//------------------------------------------------------------------------
// Rôle de la classe <Catalogue>
//
//
//------------------------------------------------------------------------

class Catalogue
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
    // Affiche le contenu du catalogue dans le terminal
    //
    // Contrat :
    //

    void AjouterTrajet();
    // Mode d'emploi :
    //
    // Permet a l'utilisateur d'ajouter un trajet simple ou compose via
    // le terminal
    //
    // Contrat :
    //

    void RechercheTrajet() const;
    // Mode d'emploi :
    //
    // Permet a l'utilisateur de rechercher les trajets entre deux villes
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    Catalogue ( const Catalogue & unCatalogue );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Catalogue ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Catalogue ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
    void AggrandirListe();
    // Mode d'emploi :
    //
    // Double la taille de listeTrajets (tailleMax et zone memoire
    // allouee a listeTrajets)
    //
    // Contrat :
    //

//----------------------------------------------------- Attributs protégés
    Trajet * listeTrajets;
    unsigned int tailleAct, tailleMax;

};

//-------------------------- Autres définitions dépendantes de <Catalogue>

#endif // CATALOGUE_H

