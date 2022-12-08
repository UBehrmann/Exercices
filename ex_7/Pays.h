//
// Created by ursbe on 06.12.2022.
//

#ifndef EXERCICES_PAYS_H
#define EXERCICES_PAYS_H

#include <string>

class Pays {
public:
    // Constructeur
    Pays(const std::string &nom, int nombreHabitants, int superficie);

    // Fonctions
    float densite() const;

    // Getter
    const std::string &getNom() const;
    int getNombreHabitants() const;
    int getSuperficie() const;

private:
    std::string nom;
    int nombreHabitants;
    int superficie;

};

#endif //EXERCICES_PAYS_H
