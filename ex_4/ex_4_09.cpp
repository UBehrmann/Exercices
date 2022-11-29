#include <iostream>

using namespace std;

void afficheSolde(int solde);
void retrait(int& soldeCompte, int montantRetirer);

int main() {

    const int soldeInitiale = 500;
    const int retrait1 = 300;
    const int retrait2 = 300;

    int solde = soldeInitiale;

    afficheSolde(solde);

    retrait(solde, retrait1);

    retrait(solde, retrait2);

    return EXIT_SUCCESS;
}

void afficheSolde(int solde){
    cout << "Solde: " << solde << endl;
}

void retrait(int& soldeCompte, int montantRetirer){
    if(soldeCompte < montantRetirer)
        montantRetirer = soldeCompte;

    soldeCompte -= montantRetirer;

    cout << "Vous avez retire: " << montantRetirer << endl;
    cout << "Votre solde est: " << soldeCompte << endl;
}
