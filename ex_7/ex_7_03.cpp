#include <iostream>
#include <vector>
#include <algorithm>
#include "Pays.h"

bool compareNbreHabitant(const Pays& pays1, const Pays& pays2);
bool compareSuperficie(const Pays& pays1, const Pays& pays2);
bool compareDensite(const Pays& pays1, const Pays& pays2);

using namespace std;

int main() {

    vector<Pays> pays;

    pays.push_back(Pays("Allemagne",84079811 ,357588));
    pays.push_back(Pays("Suisse",8738791 ,41285));
    pays.push_back(Pays("Russie",17234033 ,146170015));
    pays.push_back(Pays("Monaco",2 ,39150));

    cout << "Plus grande population : " << (*min_element(pays.begin(), pays.end(),
                                                      compareNbreHabitant)).getNom() << endl;
    cout << "Plus grande superficie : " << min_element(pays.begin(), pays.end(),
                                                      compareSuperficie)->getNom() << endl;
    cout << "Plus grande densite    : " << min_element(pays.begin(), pays.end(),
                                                   compareDensite)->getNom() << endl;


    return EXIT_SUCCESS;
}

bool compareNbreHabitant(const Pays& pays1, const Pays& pays2){
    return pays1.getNombreHabitants() > pays2.getNombreHabitants();
}

bool compareSuperficie(const Pays& pays1, const Pays& pays2) {
    return pays1.getSuperficie() > pays2.getSuperficie();
}

bool compareDensite(const Pays& pays1, const Pays& pays2) {
    return pays1.densite() < pays2.densite();
}