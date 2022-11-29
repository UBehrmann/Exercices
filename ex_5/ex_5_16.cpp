#include <iostream>
#include <vector>

using namespace std;

vector<int> concatenation(const vector<int>& vector1, const vector<int>& vector2);
void afficheVec(const vector<int> vecteur);
void test(vector<int> vecteur1, vector<int> vecteur2);

int main() {

    vector<int> vector1(4,100);
    int tabPour2[] = {1,3,5,7,9};
    vector<int> vector2(tabPour2, tabPour2 + sizeof(tabPour2) / sizeof(int) );
    vector<int> vector3(5,5);

    test(vector1, vector2);
    test(vector2, vector3);
    test(vector3, vector1);

    return EXIT_SUCCESS;
}

vector<int> concatenation(const vector<int>& vector1, const vector<int>& vector2){
    vector<int> nouveauVecteur(vector1.size()+vector2.size());

    size_t indice = 0;

    for (size_t i = 0; i < vector1.size(); ++i) {
        nouveauVecteur[indice] = vector1[i];
        ++indice;
    }

    for (size_t i = 0; i < vector2.size(); ++i) {
        nouveauVecteur[indice] = vector2[i];
        ++indice;
    }

    return nouveauVecteur;
}

void afficheVec(const vector<int> vecteur){
    cout << '[';
    for (int i = 0; i < vecteur.size(); ++i) {

        if(i != 0) cout << ", ";

        cout << vecteur[i];
    }
    cout << ']' << endl;
}

void test(vector<int> vecteur1, vector<int> vecteur2){
    static int compteur = 1;
    cout << "Test n=" << compteur << endl;

    afficheVec(vecteur1);
    afficheVec(vecteur2);

    vector<int> vector = concatenation(vecteur1, vecteur2);

    afficheVec(vector);

    ++compteur;
    cout << endl;
}
