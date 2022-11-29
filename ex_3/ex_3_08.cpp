#include <iostream>

using namespace std;

int main() {

    int mois;
    int jours;
    cout << "Entrez un no de mois (1-12) :";
    cin >> mois;

    cout << "Ce mois comporte "
         << (mois == 2 ? " 28 ou 29" :
             mois == 2 ||
             mois == 4 ||
             mois == 9 ||
             mois == 11 ? "30" : "31")
         << " jours." << endl;

}
