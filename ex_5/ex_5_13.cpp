#include <iostream>

using namespace std;
void supprimerDoublon(int tab[], size_t& tailleTab);
void afficheTab(const int tab[], size_t tailleTab);
void test(int tab[], size_t& tailleTab);

int main() {

    // Variable
    int tab1[] = {0, 1, 2,3,4,5,6,7,8,9, 10};
    size_t TAILLE_TAB1 = sizeof(tab1) / sizeof(tab1[0]);

    int tab2[] = {0, 3, 3,3,4,3,6,3,8,3, 4, 5, 4, 6, 10};
    size_t TAILLE_TAB2 = sizeof(tab2) / sizeof(tab2[0]);

    int tab3[] = { 1};
    size_t TAILLE_TAB3 = sizeof(tab3) / sizeof(tab3[0]);

    test(tab1, TAILLE_TAB1);
    test(tab2, TAILLE_TAB2);
    test(tab3, TAILLE_TAB3);

    return EXIT_SUCCESS;
}

void supprimerDoublon(int tab[], size_t& tailleTab){

    for (int i = 0; i < tailleTab; ++i) {
        for (int j = i + 1; j < tailleTab; ++j) {
            if(tab[i] == tab[j]) {
                for (int k = j; k < tailleTab - 1; ++k) {
                    tab[k] = tab[k + 1];
                }
                --tailleTab;
                --j;
            }
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

void test(int tab[], size_t& tailleTab){
    static int compteur = 1;
    cout << "Test n: " << compteur << endl;

    afficheTab(tab, tailleTab);
    supprimerDoublon(tab, tailleTab);
    afficheTab(tab, tailleTab);

    ++compteur;
    cout << endl;
}