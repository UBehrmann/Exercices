#include <iostream>
#include "Point.h"


using namespace std;

int main() {

    Point point(1.5f, 2.6f);

    point.affiche();

    point.translation(2.2f, -1.1f);

    point.affiche();

    Point point2(1.2f, -4.4f);

    point2.affiche();

    // Ex 7.5
    point.somme(point2).affiche();

    return EXIT_SUCCESS;
}
