#include <iostream>

using namespace std;

bool operationArithmetiques(double nbre1, double nbre2, char operateur, double& resultat);

int main() {

    double resultat;
    operationArithmetiques(3.0, 2.0, '+',resultat);
    cout << resultat << endl;

    operationArithmetiques(3.0, 2.0, '-',resultat);
    cout << resultat << endl;

    operationArithmetiques(3.0, 2.0, '*',resultat);
    cout << resultat << endl;

    operationArithmetiques(3.0, 2.0, '/',resultat);
    cout << resultat << endl;

    operationArithmetiques(3.0, 2.0, 'a',resultat);
    cout << resultat << endl;

    return EXIT_SUCCESS;
}

bool operationArithmetiques(double nbre1, double nbre2, char operateur, double& resultat){
    switch (operateur) {
        case '+':
            resultat = nbre1 + nbre2;
            return true;
        case '-':
            resultat = nbre1 - nbre2;
            return true;
        case '*':
            resultat = nbre1 * nbre2;
            return true;
        case '/':
            resultat = nbre1 / nbre2;
            return true;
        default:
            resultat = 0;
            return false;
    }
}
