// PRG1_E
//---------------------------------------------------------------------------------
// Fichier        : annexe.h
// Auteur(s)      : Urs Behrmann
// But            : Fonction pour affichage, saisie
// Modifications  :
// Remarque(s)    : NILL
// Compilateur    : MinGW w64 9.0 / C++20
//---------------------------------------------------------------------------------

#ifndef EXERCICES_ANNEXE_H
#define EXERCICES_ANNEXE_H

#include <string>
#include <vector>


using Vecteur = std::vector<int>;


char saisieCharactere(const std::string &MSG);

void fin();

std::string vraiFaux(int valeur);

void afficheVecteur(const Vecteur &vecteur);

std::string to_string(const Vecteur& vecteur);

#endif //EXERCICES_ANNEXE_H
