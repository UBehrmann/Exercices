#include <iostream>
#include <vector>

using namespace std;

bool tousImpair(const vector<int> vecteur);
void afficheVec(const vector<int> vecteur);
void test(vector<int> vecteur);

int main() {

    vector<int> vector1(4,100);
    int tabPour2[] = {1,3,5,7,9};
    vector<int> vector2(tabPour2, tabPour2 + sizeof(tabPour2) / sizeof(int) );
    vector<int> vector3(5,5);

    test(vector1);
    test(vector2);
    test(vector3);

    return EXIT_SUCCESS;
}

void afficheVec(const vector<int> vecteur){
    cout << '[';
    for (int i = 0; i < vecteur.size(); ++i) {

        if(i != 0) cout << ", ";

        cout << vecteur[i];
    }
    cout << ']' << endl;
}

bool tousImpair(const vector<int> vecteur){
    for (int i = 0; i < vecteur.size(); ++i) {
        if (vecteur[i] % 2 == 0)
            return false;
    }
    return true;
}

void test(vector<int> vecteur){
    afficheVec(vecteur);
    if(tousImpair(vecteur))
        cout << "Tous sont impaires."<< endl;
    else
        cout << "Pas tous sont impaires." << endl;

}

