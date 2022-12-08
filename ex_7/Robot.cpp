//
// Created by ursbe on 08.12.2022.
//

#include "Robot.h"

Robot::Robot(int posX){
    (*this).posX = posX;
}

void Robot::deplacer() {

    posX += uniteDeplace * direction;
}

void Robot::faireDemiTour() {
    direction *= -1;
}

int Robot::getPosition() const {
    return posX;
}
