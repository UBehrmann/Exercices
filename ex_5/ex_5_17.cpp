#include <iostream>
#include <vector>

using namespace std;

vector<int> fusionAlternee(vector<int>& vecteur1, vector<int>& vecteur2);
void afficheVecteur(const vector<int>& vecteur);
void test(vector<int> vecteur1, vector<int> vecteur2);

int main() {

    vector<int> vector1(4,100);
    int tabPour2[] = {1,2,3,4,5,6};
    vector<int> vector2(tabPour2, tabPour2 + sizeof(tabPour2) / sizeof(int) );
    vector<int> vector3(5,5);

    test(vector1, vector2);
    test(vector2, vector3);
    test(vector3, vector1);

    return EXIT_SUCCESS;
}

vector<int> fusionAlternee(vector<int>& vecteur1, vector<int>& vecteur2){
    vector<int> vecteurFusionee(vecteur1.size() + vecteur2.size());

    size_t compteur1 = 0, compteur2 = 0;

    for (size_t i = 0; i < vecteur1.size() + vecteur2.size(); ++i) {

        if( i % 2 == 0 && compteur1 < vecteur1.size() ) {
            vecteurFusionee[i] = vecteur1[compteur1];
            ++compteur1;
        }else {
            vecteurFusionee[i] = vecteur2[compteur2];
            ++compteur2;
        }
    }

    return vecteurFusionee;
}

void afficheVecteur(const vector<int>& vecteur){
    cout << '[';
    for (size_t i = 0; i < vecteur.size(); ++i) {

        if(i != 0) cout << ", ";

        cout << vecteur[i];
    }
    cout << ']' << endl;
}

void test(vector<int> vecteur1, vector<int> vecteur2){
    static int compteur = 1;
    cout << "Test n=" << compteur << endl;

    afficheVecteur(vecteur1);
    afficheVecteur(vecteur2);

    vector<int> vecteur = fusionAlternee(vecteur1, vecteur2);

    afficheVecteur(vecteur);

    ++compteur;
    cout << endl;
}
