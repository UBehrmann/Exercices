#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int NBRE_COLONNES = 5;
    const int LARGUEUR = 4;
    const int NOMBRE_DEPART = 20;
    const int NOMBRE_FIN = 1;

    for (int i = 0; i <= NOMBRE_DEPART - NOMBRE_FIN; ++i)
    {
        cout << setw(LARGUEUR) << NOMBRE_DEPART - i;

        if(i % NBRE_COLONNES == NBRE_COLONNES-1) cout << endl;
    }

    cout << endl << endl;

    int compteur = 0;

    while (NOMBRE_DEPART - NOMBRE_FIN >= compteur){

        cout << setw(LARGUEUR) << NOMBRE_DEPART - compteur++;

        if(compteur % NBRE_COLONNES == 0) cout << endl;
    }

}
