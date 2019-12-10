/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par Emma Neiss, Yann Dupont
    e-mail               : emma.neiss@insa-lyon.fr yann.dupont@insa-lyon.fr
*************************************************************************/

//-------- Interface de la classe Catalogue (fichier Catalogue.h) --------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

//--------------------------------------------------- Interfaces utilisées
#include <iostream>
#include <cstring>
#include "TS.h"
#include "TC.h"

//------------------------------------------------------------- Constantes
static unsigned int TAILLEDEFAUT = 10;

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// La classe Catalogue repertorie les trajets entres par l'utilisateur
// et met a disposition des services permettant d'en ajouter,
// de les afficher ou d"effectuer une recherche.
//------------------------------------------------------------------------

class Catalogue
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Afficher() const;
    //
    // Affiche le contenu du catalogue dans le terminal
    //
    // Contrat :
    //

    void AjouterTrajet();
    //
    // Permet a l'utilisateur d'ajouter un trajet simple ou compose au catalogue
    // Aucun parametre, la selection est effectuee via l'entree standard
    //
    // Contrat :
    //

    void RechercheTrajet() const;
    //
    // Permet a l'utilisateur de rechercher les trajets entre deux villes
    // Aucun parametre, la selection est effectuee via l'entree standard
    //
    // Contrat :
    //

//-------------------------------------------- Constructeurs - destructeur
    Catalogue ( const Catalogue & unCatalogue );
    //
    // Cree un objet Catalogue par copie
    // unCatalogue : objet Catalogue a copier
    //
    // Contrat :
    //

    Catalogue ( );
    //
    // Cree un objet Catalogue
    //
    // Contrat :
    //

    virtual ~Catalogue ( );
    //
    // Detruit l'objet Catalogue
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
    void AggrandirListe();
    //
    // Double la taille de listeTrajets (tailleMax et zone memoire
    // allouee a listeTrajets)
    // tailleAct reste inchange
    //
    // Contrat :
    //

//----------------------------------------------------- Attributs protégés
    Trajet ** listeTrajets;
    unsigned int tailleAct, tailleMax;

};

//-------------------------- Autres définitions dépendantes de <Catalogue>

#endif // CATALOGUE_H

