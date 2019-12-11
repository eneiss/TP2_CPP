/*************************************************************************
                           TS  -  Trajet simple
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : emma.neiss@insa-lyon.fr  yann.dupont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe TS (fichier TS.h) --------------------

#if ! defined ( TS_H )
#define TS_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"

//------------------------------------------------------------------------
// Rôle de la classe TS
// Classe définissant un trajet simple possédant un seul moyen de
// transport en plus des caractéristiques d'un trajet (départ et arrivée)
//------------------------------------------------------------------------

class TS : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Afficher() const;
    // Mode d'emploi :
    // Affiche les caractéristiques du trajet simple appelant
    // Contrat :
    // Caractéristiques mises en forme et affichées dans la sortie standard
    // (cout)

//-------------------------------------------- Constructeurs - destructeur
    TS ( const TS & unTS );
    // Mode d'emploi (constructeur de copie) :
    // Construit une copie du trajet simple passé en paramètre
    // Contrat :
    // Les caractéristiques char* sont dupliquées dans une zone mémoire
    // allouée dynamiquement propre au nouvel objet

    TS ( const Ville & villeDepart, const Ville & villeArrivee, const MT & moyenTransp);
    // Mode d'emploi :
    // Construit un trajet simple à partir de ses caractéristiques passées
    // en paramètres
    // Contrat :
    // Les caractéristiques du trajet simple sont copiées dans une zone
    // mémoire allouée dynamiquement propre à l'objet instancié

    virtual ~TS ( );
    // Mode d'emploi :
    // Détruit l'objet TS appelant
    // Contrat :
    // Libère l'espace mémoire alloué dynamiquement pour les villes de
    // départ, d'arrivée et pour le moyen de transport

//------------------------------------------------------------------ PRIVE

protected:

//----------------------------------------------------- Attributs protégés

    MT mt;

};

#endif // TS_H

