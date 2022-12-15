//
// Created by ursbe on 06.12.2022.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <complex>

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

    cout << setprecision(3) << "( " << x << " ; " << y << " )" << endl;
}

float Point::abscisse() const {
    return x;
}

float Point::ordonnee() const {
    return y;
}

Point Point::somme(const Point &point) const {
    return Point(point.x + x, point.y + y);
}

void Point::rotation(float radians) {
    float ancienX = this->x;
    float ancienY = this->y;

    this->x = ( ancienX * cos(radians) ) - ( ancienY * sin(radians) );
    this->y = ( ancienX * sin(radians) ) + ( ancienY * cos(radians) );
}

void Point::setPoint(float x, float y) {
    this->x = x;
    this->y = y;
}

Point Point::coordonneesPolaire(float rho, float theta) {

    // Calculate the complex number in polar form using polar
    complex<double> z = polar(rho, theta);

    return Point(z.real(), z.imag());
}
