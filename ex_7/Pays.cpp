//
// Created by ursbe on 06.12.2022.
//

#include "Pays.h"

// nombre d’habitants par kilomètre carré
float Pays::densite() const {
    return (float)nombreHabitants / (float)superficie;
}

Pays::Pays(const std::string &nom, int nombreHabitants, int superficie){
    this->nom = nom;
    this->nombreHabitants = nombreHabitants;
    this->superficie = superficie;
}
