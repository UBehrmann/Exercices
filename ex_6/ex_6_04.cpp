#include <iostream>
#include <string>

using namespace std;

int main() {

    const char SYMBOLE_ETOILE = '*';
    const char ESPACE = ' ';

    const string PREMIER_LIGNE      = string(3, ESPACE) + string(1, SYMBOLE_ETOILE);
    const string DEUXIEME_LIGNE     = string (2, ESPACE) + string (3, SYMBOLE_ETOILE);
    const string TROISIEME_LIGNE    = string (1, ESPACE) + string(5, SYMBOLE_ETOILE);
    const string QUATRIEME_LIGNE    = string(7, SYMBOLE_ETOILE);

    cout << PREMIER_LIGNE << endl
         << DEUXIEME_LIGNE << endl
         << TROISIEME_LIGNE << endl
         << QUATRIEME_LIGNE << endl
         << TROISIEME_LIGNE << endl
         << DEUXIEME_LIGNE << endl
         << PREMIER_LIGNE << endl;

    return EXIT_SUCCESS;
}
