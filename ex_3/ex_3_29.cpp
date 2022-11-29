#include <iostream>
#include <cmath>


using namespace std;

int main() {

    int nbre1;
    const int nbre1Min = 0;

    const string MSG_ERREUR = "/!\\ erreur de saisie ..."s;
    bool         erreur;    // ... dans la boucle

    do {
        // message et saisie
        cout << "Premier nombre [" << nbre1Min << ">=] : ";
        cin >> nbre1;

        // vérification
        erreur = cin.fail() or nbre1 < nbre1Min;
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        // vider buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while(erreur);

    int nbre2;
    const int nbre2Min = 0;

    do {
        // message et saisie
        cout << "Premier nombre [" << nbre2Min << ">=] : ";
        cin >> nbre2;

        // vérification
        erreur = cin.fail() or nbre2 < nbre2Min;
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        // vider buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while(erreur);

    int ppmc = 0;
    int compteur = 2;
    const int maxCompteur = nbre2 > nbre1 ? nbre2 : nbre1;

    do{
        if( nbre1 % compteur == 0 && nbre2 % compteur == 0) ppmc = compteur;

    }while(ppmc == 0 && compteur++ <= maxCompteur);



    if (ppmc != 0)
        cout << "Le PPMC de " << nbre1 << " et de " << nbre2 << " est : " << ppmc << endl;
    else
        cout << "Le PPMC de " << nbre1 << " et de " << nbre2 << " n'existe pas!" << endl;

    return EXIT_SUCCESS;
}
