#include <iostream>
#include <vector>

using namespace std;

bool compareTabs(int tab1[], size_t& tailleTab1, int tab2[], size_t& tailleTab2);
void afficheTab(const int tab[], size_t tailleTab);
void test(int tab1[], size_t& tailleTab1, int tab2[], size_t& tailleTab2);

int main() {

    // Variable
    int tab1[] = {0, 1, 2,3,4,5,6,7,8,9, 10};
    size_t TAILLE_TAB1 = sizeof(tab1) / sizeof(tab1[0]);

    int tab2[] = {0, 3, 3,3,4,3,6,3,8,3, 4, 5, 4, 6, 10};
    size_t TAILLE_TAB2 = sizeof(tab2) / sizeof(tab2[0]);

    int tab3[] = { 0, 3, 6, 8, 10, 5, 4};
    size_t TAILLE_TAB3 = sizeof(tab3) / sizeof(tab3[0]);

    test(tab1, TAILLE_TAB1, tab2, TAILLE_TAB2);
    test(tab2, TAILLE_TAB2, tab3, TAILLE_TAB3);
    test(tab3, TAILLE_TAB3, tab1, TAILLE_TAB1);

    return EXIT_SUCCESS;
}

bool compareTabs(int tab1[], size_t& tailleTab1, int tab2[], size_t& tailleTab2){

    bool estEgal;

    for (int i = 0; i < tailleTab1; ++i) {
        estEgal = false;
        for (int j = 0; j < tailleTab2; ++j) {
            if(tab1[i] == tab2[j]) {
                estEgal = true;
                break;
            }
        }
        if(!estEgal) break;
    }

    if(estEgal)
        for (int i = 0; i < tailleTab2; ++i) {
            estEgal = false;
            for (int j = 0; j < tailleTab1; ++j) {
                if(tab2[i] == tab1[j]) {
                    estEgal = true;
                    break;
                }
            }
            if(!estEgal) break;
        }

    return estEgal;
}


void afficheTab(const int tab[], size_t tailleTab){

    cout << '[';
    for (int i = 0; i < (int)tailleTab; ++i) {

        if(i != 0) cout << ", ";

        cout << tab[i];
    }
    cout << ']' << endl;
}

void test(int tab1[], size_t& tailleTab1, int tab2[], size_t& tailleTab2){
    static int compteur = 1;
    cout << "Test n=" << compteur << endl;

    afficheTab(tab1, tailleTab1);
    afficheTab(tab2, tailleTab2);

    if (compareTabs(tab1, tailleTab1, tab2, tailleTab2))
        cout << "Les tabs sont egals." << endl;
    else
        cout << "Les tabs ne sont pas egals." << endl;

    ++compteur;
    cout << endl;
}