#include <iostream>
#include <limits>

#define VIDE_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

double lireUnDouble(double min, double max);
int inputNotes(double notes[]);
void calculeMoyenne(const double notes[], int nbreNotes);

int main() {
    double notes[10];
    int nbreNotes;

    nbreNotes = inputNotes(notes);

    calculeMoyenne(notes, nbreNotes);

    return EXIT_SUCCESS;
}

int inputNotes(double notes[]){
    int compteurInputs = -1;

    do{
        ++compteurInputs;

        cout << "Input " << compteurInputs + 1 << " :";

        notes[compteurInputs] = lireUnDouble(0, 6.0);

    }while(compteurInputs < 10 and notes[compteurInputs] != 0);

    return compteurInputs;
}

void calculeMoyenne(const double notes[], int nbreNotes){

    double calcule = 0;

    for (int i = 0; i < nbreNotes; ++i) {
        calcule += notes[i];
    }

    cout << "Moyenne: " << calcule / nbreNotes << endl;
}

double lireUnDouble(double min, double max){
    double input;
    bool erreur;
    do {
        // Message et saisie
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