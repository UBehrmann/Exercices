#include <iostream>
#include <cmath>


using namespace std;

int main() {

    int hauteurTriangle;
    const int hauteurTriangleMin = 0;

    const string MSG_ERREUR = "/!\\ erreur de saisie ..."s;
    bool         erreur;    // ... dans la boucle

    do {
        // message et saisie
        cout << "Hauteur initiale [" << hauteurTriangleMin << ">=] : ";
        cin >> hauteurTriangle;

        // vérification
        erreur = cin.fail() or hauteurTriangle < hauteurTriangleMin;
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        // vider buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while(erreur);

    for( int i = 0; i < hauteurTriangle; ++i){
        for( int x = 0 ; x < hauteurTriangle-1 ; ++x){
            if ( i )
            cout << " ";
        }

    }
}
