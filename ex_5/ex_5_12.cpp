#include <iostream>

using namespace std;
void supprimeValeur(int tab[], size_t& tailleTab, int valleurASupprimer);
void afficheTab(const int tab[], size_t tailleTab);
void test(int tab[], size_t& tailleTab, int valleurASupprimer);

int main() {

    // Variable
    int tab1[] = {0, 1, 2,3,4,5,6,7,8,9, 10};
    size_t TAILLE_TAB1 = sizeof(tab1) / sizeof(tab1[0]);

    int tab2[] = {0, 3, 3,3,4,3,6,3,8,3};
    size_t TAILLE_TAB2 = sizeof(tab2) / sizeof(tab2[0]);

    int tab3[] = { 1};
    size_t TAILLE_TAB3 = sizeof(tab3) / sizeof(tab3[0]);

    test(tab1, TAILLE_TAB1, 2);
    test(tab2, TAILLE_TAB2, 3);
    test(tab3, TAILLE_TAB3, 1);

    return EXIT_SUCCESS;
}

void supprimeValeur(int tab[], size_t& tailleTab, int valleurASupprimer){

    for (int i = 0; i < tailleTab; ++i) {
        if (tab[i] == valleurASupprimer) {
            for (int j = i; j < tailleTab; ++j) {
                tab[j] = tab[j + 1];
            }
            --tailleTab;
            --i;
        }
    }
}

void afficheTab(const int tab[], size_t tailleTab){

    cout << '[';
    for (int i = 0; i < (int)tailleTab; ++i) {

        if(i != 0) cout << ", ";

        cout << tab[i];
    }
    cout << ']' << endl;
}

void test(int tab[], size_t& tailleTab, int valeurASupprimer){
    static int compteur = 1;
    cout << "Test n: " << compteur << endl;

    afficheTab(tab, tailleTab);
    supprimeValeur(tab, tailleTab, valeurASupprimer);
    afficheTab(tab, tailleTab);

    ++compteur;
    cout << endl;
}