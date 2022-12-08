//
// Created by ursbe on 06.12.2022.
//

#include <iostream>

#include "Point.h"

using namespace std;

Point::Point(float xRecu, float yRecu){

    x = xRecu;
    y = yRecu;
}

void Point::translation(float xRecu, float yRecu) {
    x += xRecu;
    y += yRecu;
}

void Point::affiche() const {

    cout << "( " << x << " ; " << y << " )" << endl;
}

float Point::abscisse() const {
    return x;
}

float Point::ordonnee() const {
    return y;
}

Point Point::somme(const Point &point) {
    return Point(point.x + x, point.y + y);
}
