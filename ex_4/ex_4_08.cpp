#include <iostream>

using namespace std;

void permutation(double& nbre1, double& nbre2, double& nbre3);
void affichage(double nbre1, double nbre2, double nbre3);

int main() {

    double x = 1;
    double y = 2;
    double z = 3;

    affichage(x,y,z);

    for (int i = 0; i < 3; ++i) {
        permutation(x,y,z);
        affichage(x,y,z);
    }

    return EXIT_SUCCESS;
}

void permutation(double& nbre1, double& nbre2, double& nbre3){
    double tmp = nbre3;
    nbre3 = nbre2;
    nbre2 = nbre1;
    nbre1 = tmp;
}
void affichage(double nbre1, double nbre2, double nbre3){
    cout << "nbre1: " << nbre1 << " - nbre2: " << nbre2 << " - nbre3: " << nbre3 << endl;
}