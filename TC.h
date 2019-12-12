/*************************************************************************
                           TC  -  Trajet composé possédant une liste de
                           sous-trajets et le nombre de sous-trajets dans
                           cette liste
                             -------------------
    début                : 19/11/2019
    copyright            : (C) 2019 par NEISS Emma et DUPONT Yann
    e-mail               : emma.neiss@insa-lyon.fr  yann.dupont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe TC (fichier TC.h) --------------------
#if ! defined ( TC_H )
#define TC_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"

//------------------------------------------------------------------------
// Rôle de la classe TC
// Classe définissant un trajet composé comme une liste d'objets Trajet
//------------------------------------------------------------------------

class TC : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    void Afficher() const;
    // Mode d'emploi :
    // Affiche les caractéristiques du trajet composé appelant
    // Contrat :
    // Caractéristiques mises en forme et affichées dans la sortie standard
    // (cout)

//-------------------------------------------- Constructeurs - destructeur
    TC ( const TC & unTC );
    // Mode d'emploi (constructeur de copie) :
    // Construit une copie du trajet composé passé en paramètre
    // Contrat :
    // La liste de sous-trajets est la même (en mémoire) que celle de
    // l'objet passé en paramètre

    TC ( unsigned int nbTrajets = 0, Trajet** listeTraj = nullptr);
    // Mode d'emploi :
    // Construit un trajet composé à partir du nombre de trajets et de
    // la liste de trajets donnés
    // Contrat :
    // L'espace mémoire utilisé par l'objet instancié pour la liste de ses
    // trajets est celui du paramètre listeTraj

    virtual ~TC ( );
    // Mode d'emploi :
    // Détruit l'objet appelant
    // Contrat :
    // Les objets pointés par chaque pointeur de la liste de trajets
    // ainsi que la liste elle-même (alloués dynamiquement) sont
    // détruits

//------------------------------------------------------------------ PRIVE

protected:

//----------------------------------------------------- Attributs protégés

    unsigned int nbTS;
    Trajet **sousTrajets;

};

#endif // TC_H

