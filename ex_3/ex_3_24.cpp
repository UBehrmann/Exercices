#include <iostream>
#include <cmath>        // Gestion des fonctions d'arrondi
#include <string>


using namespace std;

int main() {

    const double gravite = 9.81;

    float coefficientRebond;
    const float COEFFICIENT_REBOND_MAX = 1;
    const float COEFFICIENT_REBOND_MIN = 0;

    const string MSG_ERREUR = "/!\\ erreur de saisie ..."s;
    bool         erreur;    // ... dans la boucle

    do {
        // message et saisie
        cout << "Coefficient de rebond [" << COEFFICIENT_REBOND_MIN << " - " << COEFFICIENT_REBOND_MAX << "[ : ";
        cin >> coefficientRebond;

        // vérification
        erreur = cin.fail() or coefficientRebond < COEFFICIENT_REBOND_MIN or coefficientRebond >= COEFFICIENT_REBOND_MAX;
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        // vider buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while(erreur);

    double hauteurInitiale;
    const float HAUTEUR_MINIMAL = 0;

    do {
        // message et saisie
        cout << "Hauteur initiale [" << HAUTEUR_MINIMAL << ">=] : ";
        cin >> hauteurInitiale;

        // vérification
        erreur = cin.fail() or hauteurInitiale < HAUTEUR_MINIMAL;
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        // vider buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while(erreur);

    int nombreRebonds;
    const int NOMBRE_REBONDS_MIN = 0;

    do {
        // message et saisie
        cout << "Nombres de rebonds [" << NOMBRE_REBONDS_MIN << ">=] : ";
        cin >> nombreRebonds;

        // vérification
        erreur = cin.fail() or nombreRebonds < NOMBRE_REBONDS_MIN;
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        // vider buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while(erreur);

    double hauteurCalculee = hauteurInitiale;

    for( int i = 1 ; i <= nombreRebonds ; ++i)
    {
        hauteurCalculee = ( pow(coefficientRebond * cbrt( (2 * gravite * hauteurCalculee) ), 2) ) / ( 2 * gravite );
        //cout << "Hauteur apres " << nombreRebonds << " rebonds: " << hauteurCalculee << endl;
    }

    cout << "Hauteur apres " << nombreRebonds << " rebonds: " << hauteurCalculee << endl;
}
