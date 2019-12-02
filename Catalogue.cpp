/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//----- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) -----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;

//------------------------------------------------------ Include personnel
#include "Catalogue.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Catalogue::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void Catalogue::Afficher() const
{
    unsigned int i;
    for (i = 0; i < tailleAct; i++) {
        cout << i+1 << " - ";
        listeTrajets[i]->Afficher();
    }
    if(tailleAct == 0){
        cout << "Aucun trajet repertorie !" << endl;
    }
}

void Catalogue::AjouterTrajet()
{
#ifdef MAP
    cerr << "Appel a la methode AjouterTrajet de Catalogue" << endl;
#endif
    // on determine si l'utilisateur veut ajouter un trajet simple ou compose
    cout << "1 : Trajet simple;   2 : Trajet compose" << endl;
    char choix;
    cin >> choix;
    cin.ignore(10000, '\n');
    while(choix != '1' && choix != '2') {
        cout << "Choix incorrect" << endl;
        cin >> choix;
        cin.ignore(10000, '\n');
    }

    Ville villeDepart = new char[30];
    Ville villeArrivee = new char[30];
    MT mt = new char[30];
    unsigned int nbSections = 0;
    if(choix == '2'){ // si c'est un trajet compose
        cout << "Nombre de sections :" << endl;
        cin >> nbSections;
        cout << "1er trajet" << endl;
    }
    cout << "Ville de depart :" << endl;
    cin >> villeDepart;
    cout << "Ville d'arrivee :" << endl;
    cin >> villeArrivee;
    cout << "Moyen de transport :" << endl;
    cin >> mt;

    Trajet * newTrajet;
    if(choix == '1'){
        newTrajet = new TS(villeDepart, villeArrivee, mt);
    } else { //if (choix == 2){ // on lit les entrees pour determiner toutes les sections du trajet
        Trajet ** newListeTrajets = new Trajet*[nbSections];
        unsigned int i;
        newListeTrajets[0] = new TS(villeDepart, villeArrivee, mt);
        for (i = 1; i < nbSections; i++) {
            //villeDepart = villeArrivee;
            strcpy(villeDepart, villeArrivee);
            cout << i+1 << "e trajet" << endl;
            cout << "Ville d'arrivee :" << endl;
            cin >> villeArrivee;
            cout << "Moyen de transport :" << endl;
            cin >> mt;
            newListeTrajets[i] = new TS(villeDepart, villeArrivee, mt);
        }
        newTrajet = new TC(nbSections, newListeTrajets);
    }

    // On place le nouveau trajet dans le catalogue
    if(tailleAct == tailleMax){
        AggrandirListe();
    }
    listeTrajets[tailleAct] = newTrajet;
    tailleAct++;
}

void Catalogue::RechercheTrajet() const
{
#ifdef MAP
    cerr << "Appel a la methode RechercheTrajet de Catalogue" << endl;
#endif
    Ville villeDepart = new char[30];
    Ville villeArrivee = new char[30];
    cout << "Ville de depart :" << endl;
    cin >> villeDepart;
    cout << "Ville d'arrivee :" << endl;
    cin >> villeArrivee;
    unsigned int i, trouve = 0;
    for (i = 0; i < tailleAct; i++) {
        //if((villeDepart.compare(listeTrajets[i].getDepart())) && (villeArrivee.compare(listeTrajets[i].getArrivee()))){
        if((strcmp(villeDepart, listeTrajets[i]->getDepart()) == 0) && (strcmp(villeArrivee, listeTrajets[i]->getArrivee()) == 0)){
            cout << "Trajet trouve : ";
            listeTrajets[i]->Afficher();
            trouve = 1;
            //break;
        }
    }
    if(trouve == 0){
        cout << "Aucun trajet trouve." << endl;
    }
}


//-------------------------------------------- Constructeurs - destructeur
Catalogue::Catalogue ( const Catalogue & unCatalogue )
// Algorithme :
//
{
#ifdef MAP
    cerr << "Appel au constructeur de copie de Catalogue" << endl;
#endif
    tailleMax = unCatalogue.tailleMax;
    tailleAct = unCatalogue.tailleAct;
    listeTrajets = new Trajet*[unCatalogue.tailleMax];
    unsigned int i;
    for (i = 0; i < tailleAct; i++) {
        listeTrajets[i] = new Trajet(*unCatalogue.listeTrajets[i]);
    }
} //----- Fin de Catalogue (constructeur de copie)


Catalogue::Catalogue ( )
// Algorithme :
//
{
#ifdef MAP
    cerr << "Appel au constructeur de Catalogue" << endl;
#endif
    listeTrajets = new Trajet*[TAILLEDEFAUT];
    tailleMax = TAILLEDEFAUT;
    tailleAct = 0;
} //----- Fin de Catalogue


Catalogue::~Catalogue ( )
// Algorithme :
//
{
#ifdef MAP
    cerr << "Appel au destructeur de Catalogue" << endl;
#endif
    unsigned int i;
    for (i = 0; i < tailleAct; i++) {
        delete listeTrajets[i];
    }
    delete[] listeTrajets;
} //----- Fin de ~Catalogue


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

void Catalogue::AggrandirListe()
{
#ifdef MAP
    cerr << "Appel a la methode AggrandirListe de Catalogue" << endl;
#endif
    tailleMax = 2 * tailleMax;
    Trajet ** nouvelleListeTrajets = new Trajet*[tailleMax];
    unsigned int i;
    for (i = 0; i < tailleAct; i++) {
        nouvelleListeTrajets[i] = listeTrajets[i];
    }
    delete[] listeTrajets;
    listeTrajets = nouvelleListeTrajets;
}

