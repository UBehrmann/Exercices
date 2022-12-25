#include <iostream>
#include <vector>
#include "Objet.h"
using namespace std;

int main() {


    Objet objet;


    objet.no();
    objet.prochainNo();
    objet.compteur();


    Objet objet2;
    Objet objet3;
    Objet objet4;

    objet.no();
    objet.prochainNo();
    objet.compteur();

    objet4.no();
    objet4.prochainNo();
    objet4.compteur();

    return EXIT_SUCCESS;
}
