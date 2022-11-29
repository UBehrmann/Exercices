#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

    int montantInitial;
    float montantCalcule;
    int tauxAnnuel;

    int annee = 0;

    cout << "Saisir montant initial: ";
    cin >> montantInitial;
    montantCalcule = montantInitial;
    cout << endl;

    cout << "Saisir taux d'interet annuel (en %)";
    cin >> tauxAnnuel;
    cout << endl;

    while(montantInitial * 2 >= montantCalcule){
        montantCalcule += montantCalcule * tauxAnnuel / 100;
        annee++;
    }

    cout << endl << "Annees pour doubler " << montantInitial << " : " << annee << endl;

    annee = 0;

    double taux = 1 + (double)tauxAnnuel/100;

    annee = ceil(log10(2) / log10(taux));

    cout << endl << "Annees pour doubler " << montantInitial/100 << " : " << annee << endl;


}
