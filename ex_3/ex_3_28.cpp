#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int nbreTerme;
    const int nbreTermeMin = 0;

    const string MSG_ERREUR = "/!\\ erreur. La valeur saisie doit etre > 0"s;
    bool         erreur;    // ... dans la boucle

    do {
        // message et saisie
        cout << "Combien de termes voulez-vous ? [" << nbreTermeMin << ">=] : ";
        cin >> nbreTerme;

        // vérification
        erreur = cin.fail() or nbreTerme < nbreTermeMin;
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        // vider buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while(erreur);

    double sommeSerieHarmonique = 0;

    for(int i = 1; i <= nbreTerme ; ++i)
        sommeSerieHarmonique += 1.0/i;

    cout << "Somme harmonique: " << sommeSerieHarmonique << endl;
}
