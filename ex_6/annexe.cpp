// PRG1_E
//---------------------------------------------------------------------------------
// Fichier        : annexe.cpp
// Auteur(s)      : Urs Behrmann
// But            : Fonction pour affichage, saisie
// Modifications  :
// Remarque(s)    : NILL
// Compilateur    : MinGW w64 9.0 / C++20
//---------------------------------------------------------------------------------

#include <string>
#include <iostream>
#include <sstream>
#include <limits>       // Utilisation de numeric limits
#include <vector>
#include "annexe.h"

using namespace std;
using Vecteur = vector<int>;

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

char saisieCharactere(const string& msg) {

    char saisie;                 // Variable de stockage de la saisie

    // Affichage message de demande de saisie
    cout << msg;

    cin >> saisie;

    VIDER_BUFFER;

    return saisie;
}

string saisieString(const string& msg){
    string saisie;                 // Variable de stockage de la saisie

    // Affichage message de demande de saisie
    cout << msg;

    cin >> saisie;

    VIDER_BUFFER;

    return saisie;
}

void fin(){
    // Demande à l'utilisateur d'appuyer sur entrer pour quitter le programme
    cout << endl << "Appuyez sur ENTER pour quitter le programme.";
    VIDER_BUFFER;
}

string vraiFaux(int valeur){
    return valeur ? "Vrai" : "Faux";
}

void afficheVecteur(const Vecteur& vecteur){
    cout << to_string(vecteur);
}

string to_string(const Vecteur& vecteur){
    stringstream ss;

    ss << '[';
    for (Vecteur::size_type i = 0; i < vecteur.size(); ++i) {

        if(i != 0) ss << ", ";

        ss << vecteur[i];
    }
    ss << ']' << endl;

    return ss.str();
}