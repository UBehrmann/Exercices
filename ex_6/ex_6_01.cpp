#include <iostream>
#include "annexe.h"

using namespace std;

int main() {

    char caractere;

    caractere = saisieCharactere("Entrez un caractere :");

    cout << "Code ASCII de 'a' : " << (int)caractere << endl;

    cout << "'" << caractere << "' est une lettre de l'alphabet    : " <<
         vraiFaux(isalpha (caractere)) << endl;
    cout << "'" << caractere << "' est une lettre minuscule        : " <<
         vraiFaux(islower(caractere)) << endl;
    cout << "'" << caractere << "' est un chiffre                  : " <<
         vraiFaux(isdigit(caractere)) << endl;
    cout << "'" << caractere << "' est un caractere de ponctuation : " <<
         vraiFaux(ispunct(caractere)) << endl;

    fin();

    return EXIT_SUCCESS;
}
