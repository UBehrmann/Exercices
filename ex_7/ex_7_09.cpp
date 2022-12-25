#include <iostream>

using namespace std;

static double prixEssence = 1.5;

class Voiture{
    int capaciteReservoir;
    double consommation;
    double litresRestant;
public:
    int getCapaciteReservoir() const {
        return capaciteReservoir;
    }

    double getConsommation() const {
        return consommation;
    }

    double getLitresRestant() const {
        return litresRestant;
    }

public:
    Voiture(int i, double d) {
        capaciteReservoir = i;
        consommation = d;
        litresRestant = capaciteReservoir;
    }

    static double getPrixEssence() {
        return prixEssence;
    }

    static void setPrixEssence(double d) {
        prixEssence = d;
    }

    double coutTrajet(int i) const {
        return (double)i/100.0 * consommation * prixEssence;
    }
};


void afficherPrixEssence(double essence);

void afficherVoiture(Voiture voiture);

void afficherCoutTrajet(double trajet);

int main() {
    afficherPrixEssence(Voiture::getPrixEssence());
    Voiture::setPrixEssence(1.34);
    afficherPrixEssence(Voiture::getPrixEssence());
    Voiture v(52, 6.7);
    afficherVoiture(v);
    afficherCoutTrajet(v.coutTrajet(1000));
    afficherVoiture(v);
    afficherCoutTrajet(v.coutTrajet(200));
    afficherVoiture(v);
    return EXIT_SUCCESS;
}

void afficherCoutTrajet(double trajet) {
    cout << "Cout du trajet : " << trajet << " Frs" << endl << endl;
}

void afficherVoiture(Voiture voiture) {
    //Capacite du reservoir [l] : 52
    //Consommation moyenne [l/100km] : 6.7
    //Nb litres restants : 52.0
    cout << "Capacite du reservoir [l] : " << voiture.getCapaciteReservoir() << endl;
    cout << "Consommation moyenne [l/100km] : " << voiture.getConsommation() << endl;
    cout << "Nb litres restants : " << voiture.getLitresRestant() << endl << endl;
}

void afficherPrixEssence(double essence) {
    cout << "Prix de l'essence : " << essence << " Frs" << endl << endl;
}
