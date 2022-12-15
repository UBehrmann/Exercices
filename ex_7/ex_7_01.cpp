#include <iostream>
#include "Point.h"

#define PI 3.14159265f

using namespace std;

int main() {

    Point point(1.5f, 2.6f);

//    point.affiche();
//
//    point.translation(2.2f, -1.1f);
//
//    point.affiche();
//
//    Point point2(1.2f, -4.4f);
//
//    point2.affiche();
//
//    // Ex 7.5
//    point.somme(point2).affiche();

    // Ex 7.6

    point.setPoint(1,0);
    point.affiche();

    for (int i = 1; i < 9; ++i) {

        point.coordonneesPolaire(2.0f, PI*1/4).affiche();

        point.rotation(PI*1/4);
        point.affiche();

    }


    return EXIT_SUCCESS;
}
