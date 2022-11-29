#include <iostream>

#include "C:\Projects\c plus plus\Exercices\annexe.h"

using namespace std;

int main() {

    char charactere;

    charactere = saisieCharactere("Entrez un caractere :");

    cout << "Code ASCII de 'a' : " << (int)charactere << endl;

    cout << "'" << charactere << "' est une lettre de l'alphabet    : " <<
    vraiFaux(isalpha (charactere)) << endl;
    cout << "'" << charactere << "' est une lettre minuscule        : " <<
    vraiFaux(islower(charactere)) << endl;
    cout << "'" << charactere << "' est un chiffre                  : " <<
    vraiFaux(isdigit(charactere)) << endl;
    cout << "'" << charactere << "' est un caractere de ponctuation : " <<
    vraiFaux(ispunct(charactere)) << endl;

    fin();

    return EXIT_SUCCESS;
}
