#include <iostream>
#include <string>

using namespace std;

int main() {

    string jourStr, moisStr;
    int jour, mois;

    cout << "Entrez une date sous la forme jj.mm (par ex 31.12) :";
    getline(cin, jourStr, '.');
    getline(cin, moisStr);

    jour = stoi(jourStr);
    mois = stoi(moisStr);

    if(jour >= 21)
        mois++;

    if(mois < 4 or mois >= 13)
        cout << "Hiver" << endl;
    else if (mois < 7)
        cout << "Printemps" << endl;
    else if (mois < 10)
        cout << "Ete" << endl;
    else
        cout << "Automne" << endl;




    return EXIT_SUCCESS;
}
