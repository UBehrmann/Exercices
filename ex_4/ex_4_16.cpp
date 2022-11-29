#include <iostream>
#include <limits>

using namespace std;

#define VIDE_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

void suiteDeSyracuse(int& chiffre);
int lireUnEntier(int min, int max);
void iterationSuiteDeSyracuse(int& chiffre, int& iterations);

int main() {

    const int N_MIN = 1;
    const int N_MAX = 1000;
    const int chiffreSyracuseFix = 100;

    int iterations = 0;
    int chiffreSyracuse;
    int intervale;

//    chiffreSyracuse = lireUnEntier(N_MIN, N_MAX);

    chiffreSyracuse = chiffreSyracuseFix;

    while(chiffreSyracuse != 1){
        suiteDeSyracuse(chiffreSyracuse);
        cout << chiffreSyracuse << " ";
        ++iterations;
    }

    cout << endl << "Suite terminee en " << iterations << " iterations."<< endl;

//    intervale = lireUnEntier(N_MIN, N_MAX);
//
//    for (int i = 0; i <= intervale; ++i) {
//        iterations = 0;
//        chiffreSyracuse = i;
//        do {
//            suiteDeSyracuse(chiffreSyracuse);
//            ++iterations;
//        }while(chiffreSyracuse > 1);
//
//        cout << "Nbre d'iter. pour n = " << i << " : " << iterations << endl;
//    }

    iterations = 0;
    chiffreSyracuse = chiffreSyracuseFix;

    iterationSuiteDeSyracuse(chiffreSyracuse, iterations);

    cout << "iterations: " << iterations;

    return EXIT_SUCCESS;
}

void suiteDeSyracuse(int& chiffre){

    if(chiffre%2)
        chiffre = chiffre * 3 + 1;
    else
        chiffre /= 2;
}

void iterationSuiteDeSyracuse(int& chiffre, int& iterations){

    if(chiffre == 1) return;

    if(chiffre%2)
        chiffre = chiffre * 3 + 1;
    else
        chiffre /= 2;

    iterationSuiteDeSyracuse(chiffre, ++iterations);
}

int lireUnEntier(int min, int max){
    int input;
    bool erreur;
    do {
        // Message et saisie
        cout << "Saisisez un entier entre " << min << " et " << max << " : ";
        cin  >> input;

        // Vérification
        erreur = cin.fail() or input < min or input > max;
        if (erreur) {
            cout << "Valeur hors limite." << endl;
            cin.clear();
        }

        VIDE_BUFFER;
    } while(erreur);

    return  input;
}
