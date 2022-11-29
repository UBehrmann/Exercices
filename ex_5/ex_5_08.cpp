#include <iostream>

using namespace std;

void decalageADroite(int tab[], size_t tailleTab);
void afficheTab(const int tab[], size_t tailleTab);
void test(int tab[], size_t tailleTab);


int main() {

    // Variable
    int tab1[] = {0, 1, 2,3,4,5,6,7,8,9, 11};
    const size_t TAILLE_TAB1 = sizeof(tab1) / sizeof(tab1[0]);

    int tab2[0] = { };
    const size_t TAILLE_TAB2 = sizeof(tab2) / sizeof(tab2[0]);

    test(tab1, TAILLE_TAB1);
    test(tab2, TAILLE_TAB2);


    return EXIT_SUCCESS;
}

void decalageADroite(int tab[], size_t tailleTab){

    int tmp = tab[tailleTab - 1];

    for (int i = (int)tailleTab-1; i > 0; --i) {
        tab[i] = tab[i - 1];
    }

    tab[0] = tmp;
}

void afficheTab(const int tab[], size_t tailleTab){

    cout << '[';
    for (int i = 0; i < (int)tailleTab; ++i) {

        if(i != 0) cout << ", ";

        cout << tab[i];
    }
    cout << ']' << endl;
}

void test(int tab[], size_t tailleTab){
    afficheTab(tab, tailleTab);
    decalageADroite(tab, tailleTab);
    afficheTab(tab, tailleTab);
}