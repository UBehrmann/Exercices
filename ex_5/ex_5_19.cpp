#include <iostream>
#include <vector>

using namespace std;
using Data = char;
using Ligne = vector<Data>;
using Matrice = vector<Ligne>;

void initMatriceCaract(Matrice& matrice);
void test();
void afficheMatrice(const Matrice& matrice);

int main() {

    test();

    return EXIT_SUCCESS;
}

void initMatriceCaract(Matrice& matrice){
//    Ligne ligne = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',
//                   't','u', 'v','w','x', 'y','z'};
    string ligne = "abcdefghijklmnopqrstuvwxyz";
    matrice.clear();
    matrice.resize(ligne.size());

    for (Matrice::size_type i = 0; i < ligne.size(); ++i)
//        matrice.at(i).assign(ligne.begin(), ligne.end() - static_cast<long long int>(i));
        matrice[i].insert(matrice[i].begin(), ligne.begin(), ligne.end() -  i);

}

void afficheMatrice(const Matrice& matrice){
    int cmpt = 0;
    for (size_t i = 0; i < matrice.size(); ++i) {
        if(i != 0) cout << endl;
        for (size_t j = 0; j < matrice[i].size(); ++j) {
            cout << matrice[i][j];
        }
    }
}

void test(){
    Matrice marticeCaract;
    initMatriceCaract(marticeCaract);

    afficheMatrice(marticeCaract);

}
