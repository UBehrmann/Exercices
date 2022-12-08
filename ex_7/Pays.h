//
// Created by ursbe on 06.12.2022.
//

#ifndef EXERCICES_PAYS_H
#define EXERCICES_PAYS_H

#include <string>

class Pays {
public:
    std::string nom;
    int nombreHabitants;
    int superficie;

    Pays(const std::string &nom, int nombreHabitants, int superficie);

    float densite() const;
private:

};


#endif //EXERCICES_PAYS_H
