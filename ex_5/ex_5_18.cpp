#include <iostream>
#include <vector>


using namespace std;
using Ligne = vector<int>;
using Matrice = vector<Ligne>;

int sommeDiagonaleGauche(Matrice matrice);
int sommeDiagonaleDroite(Matrice matrice);
void sommeDiagonale(Matrice& matrice, int& sommeGauche, int& sommeDroite);
bool estCarree(const Matrice& matrice);
void afficheMatrice(const Matrice& matrice);
void test(Matrice matrice);

int main() {

    Matrice matrice = {
            {1, 0, 1},
            {0, 1, 0},
            {1, 1, 0}
    };
    Matrice matrice2 = {
            {1, 0, 1, 1},
            {0, 1, 0, 1},
            {1, 0, 1, 1},
            {1, 1, 0, 1}
    };
    Matrice matrice3 = {
            {1, 0, 1, 1},
            {0, 1, 0, 1},
            {1, 0, 0, 1}
    };

    test(matrice);
    test(matrice2);
    test(matrice3);

    return EXIT_SUCCESS;
}

int sommeDiagonaleGauche(const Matrice matrice){
    int somme = 0;

    for(size_t i = 0 ; i < matrice.size(); ++i)
        somme += matrice[i][i];

    return somme;
}
int sommeDiagonaleDroite(const Matrice matrice){
    int somme = 0;

    for(size_t i = 0 ; i < matrice.size(); ++i) {
        somme += matrice[i][matrice.size() - i - 1];
    }

    return somme;
}
void afficheMatrice(const Matrice& matrice){
    cout << "[";
    for (int i = 0; i < matrice.size(); ++i) {
        if(i != 0) cout << ", ";
        cout << "(";
        for (int j = 0; j < matrice[i].size(); ++j) {
            if(j != 0) cout << ", ";
            cout << matrice[i][j];
        }
        cout << ")";
    }
    cout << "]" << endl;
}
void sommeDiagonale(Matrice& matrice, int& sommeGauche, int& sommeDroite){

    sommeGauche = 0;
    sommeDroite = 0;

    if(!estCarree(matrice)) return;

    for(size_t i = 0 ; i < matrice.size(); ++i) {
        sommeGauche += matrice[i][i];
        sommeDroite += matrice[i][matrice.size() - i - 1];
    }
}

bool estCarree(const Matrice& matrice){
    if(matrice.empty()) return true;

    for (Matrice::size_type i = 0; i < matrice.size(); ++i)
        if (matrice[0].size() != matrice.size())
            return false;

    return true;
}

void test(Matrice matrice){
    afficheMatrice(matrice);
    cout << "Somme element diagonal gauche: " << sommeDiagonaleGauche(matrice) << endl;
    cout << "Somme element diagonal droite: " << sommeDiagonaleDroite(matrice) << endl;

    int sommeGauche;
    int sommeDroite;

    cout << "V2" << endl;
    sommeDiagonale(matrice, sommeGauche, sommeDroite);
    cout << "Somme element diagonal gauche: " << sommeDiagonaleGauche(matrice) << endl;
    cout << "Somme element diagonal droite: " << sommeDiagonaleDroite(matrice) << endl;

}