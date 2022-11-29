#include <iostream>

using namespace std;

enum class Mois { JANVIER = 1, FEVRIER, MARS, AVRIL, MAI, JUIN, JUILLET, AOUT, SEPTEMBRE, OCTOVRE, NOVEMBRE, DECEMBRE };

int main() {

    int noMois;

    cout << "Entrez un no de mois (1-12) :";
    cin >> noMois;

     cout << "Ce mois comporte ";
    switch ((Mois) noMois) {
        case Mois::FEVRIER:
            cout << "28 ou 29";
            break;
        case Mois::AVRIL:
        case Mois::JUIN:
        case Mois::SEPTEMBRE:
        case Mois::NOVEMBRE:
            cout << "30";
            break;
        default:
            cout << "31";
    }

    cout << " jours." << endl;



}
