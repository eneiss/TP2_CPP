/*************************************************************************
                           Trajet  -  trajet
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : emma.neiss@insa-lyon.fr  yann.dupont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe Trajet (fichier Trajet.h) ------------
#if ! defined ( TRAJET_H )
#define TRAJET_H

//------------------------------------------------------------- Constantes
#define MAX_CHAR_VILLE 31

//------------------------------------------------------------------ Types
typedef char* Ville;
typedef char* MT;

//------------------------------------------------------------------------
// Rôle de la classe Trajet
// Définir un trajet par ses villes de départ et d'arrivée
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
    // Le pointeur renvoyé pointe directement sur la zone
    // mémoire utilisée par l'attribut depart de l'objet

    virtual void Afficher() const;
    // Mode d'emploi :
    // Affiche les caractéristiques du trajet appelant
    // Contrat :
    // Les caractéristiques sont affichées sur la sortie
    // standard (cout)

//-------------------------------------------- Constructeurs - destructeur
    Trajet ( const Trajet & unTrajet );
    // Mode d'emploi (constructeur de copie) :
    // Construit une copie du trajet passé en paramètre
    // Contrat :
    // Les caractéristiques char* sont dupliquées dans une zone mémoire
    // allouée dynamiquement propre au nouvel objet

    Trajet ( const Ville & villeDepart, const Ville & villeArrivee);
    // Mode d'emploi :
    // Crée un trajet ayant comme villes de départ et d'arrivée
    // les paramètres formels villeDepart et villeArrivee
    // Contrat :
    // Les villes sont copiées dans une zone mémoire propre à
    // l'objet créé

    Trajet();
    // Mode d'emploi :
    // Instancie un trajet dont les villes de départ et d'arrivée
    // sont ""
    // Contrat :
    // La taille maximale des noms des villes du trajet est
    // définie par la constante MAX_CHAR_VILLE


    virtual ~Trajet ( );
    // Mode d'emploi :
    // Détruit le trajet appelant
    // Contrat :
    // Libère l'espace mémoire alloué dynamiquement pour les villes de
    // départ et d'arrivée

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Attributs protégés

    Ville depart;
    Ville arrivee;

};

#endif // TRAJET_H

