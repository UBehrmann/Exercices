#include <iostream>
#include <string>

#include "annexe.h"

using namespace std;

void test(const string& chiffre);

int main() {

    test(saisieString("Saisir un chiffre: "));

    return EXIT_SUCCESS;
}

void test(const string& chiffre){
    cout << " Nombre saisie     :" << chiffre << endl;
    cout << "Nombre de chiffres :" << chiffre.length() << endl;
    cout << "Premier chiffre    :" << chiffre.at(0) << endl;
    cout << "Dernier chiffre    :" << chiffre.at((size_t)chiffre.length()-1) << endl;
}