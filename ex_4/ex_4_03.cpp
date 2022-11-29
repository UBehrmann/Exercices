#include <iostream>
#include <iomanip>

using namespace std;

double volumePyramideRectangulaire(double longueur, double largeur, double hauteur){
    return (longueur * largeur * hauteur) / 3;
}

void afficher(const string& text, double valeur, int precision){
    cout << fixed << setprecision(precision) << text << valeur << endl;
}

int main() {
    afficher("Volume pyramide 1: ",volumePyramideRectangulaire(10, 3.5, 12), 1);
    afficher("Volume pyramide 2: ", volumePyramideRectangulaire(3.6, 2.4, 2.7), 1);

    return EXIT_SUCCESS;
}
