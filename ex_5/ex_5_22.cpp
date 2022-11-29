#include <iostream>
#include <vector>
#include <array>

using namespace std;

const size_t NBRE_TYPE_MEDAILLE = 3;
const size_t NBRE_PAYS = 7;
using Data = int;
using Ligne = array<Data, NBRE_TYPE_MEDAILLE>;
using Matrice = array<Ligne, NBRE_PAYS>;

int medaillesTotalPays(const Matrice& matrice, Matrice::size_type pays);
int medaillesTotalType(const Matrice& matrice, Matrice::size_type type);

int main() {

    enum Pays{
        CANADA,
        CHINE,
        ALLEMAGNE,
        COREE,
        JAPON,
        RUSSIE,
        ETATS_UNIS
    };

    string nomPays[NBRE_PAYS] = {"Canada", "Chine", "Allemagne", "Coree", "Japon", "Russie",
                                 "Etats-Unis"};

    enum typeDeMedaille{
        OR,
        ARGENT,
        BRONZE
    };

    string nomTypeMedaille[NBRE_TYPE_MEDAILLE] = {"or", "argent", "bronze"};

    Matrice medaille = {
            Ligne{1, 0, 1},
            Ligne{1, 1, 0},
            Ligne{0, 0, 1},
            Ligne{1, 0, 0},
            Ligne{0, 1, 1},
            Ligne{0, 1, 1},
            Ligne{1, 1, 0}
    };


    for (size_t pays = CANADA; pays <= ETATS_UNIS; ++pays) {
        cout << nomPays[pays] << " a gagne " << medaillesTotalPays(medaille, pays) << " medailles."
        << endl;
    }
    cout << endl;

    for (size_t typeMedialle = 0; typeMedialle <= BRONZE; ++typeMedialle) {
        cout << "Il y a eu " << medaillesTotalType(medaille, typeMedialle) << " medaille en " <<
        nomTypeMedaille[typeMedialle] << "." << endl;
    }





    return EXIT_SUCCESS;
}

int medaillesTotalPays(const Matrice& matrice, Matrice::size_type pays){
    int somme = 0;

    for (Matrice::size_type i = 0; i < matrice[pays].size(); ++i)
        somme += matrice[pays][i];

    return somme;
}

int medaillesTotalType(const Matrice& matrice, Matrice::size_type type){
    int somme = 0;

    for (Matrice::size_type i = 0; i < matrice.size(); ++i)
        somme += matrice[i][type];

    return somme;
}