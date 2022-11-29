#include <iostream>

using namespace std;

void supprimeCentre(int tab[], size_t &tailleTab);
void afficheTab(const int tab[], size_t tailleTab);
void test(int tab[], size_t tailleTab);

int main() {

    // Variable
    int tab1[] = {0, 1, 2,3,4,5,6,7,8,9, 10};
    const size_t TAILLE_TAB1 = sizeof(tab1) / sizeof(tab1[0]);

    int tab2[] = {0, 1, 2,3,4,5,6,7,8,9};
    const size_t TAILLE_TAB2 = sizeof(tab2) / sizeof(tab2[0]);

    test(tab1, TAILLE_TAB1);
    test(tab2, TAILLE_TAB2);

    return EXIT_SUCCESS;
}

void supprimeCentre(int tab[], size_t &tailleTab){

    if(tailleTab%2){
        for (int i = (int)tailleTab/2; i < tailleTab - 1; ++i) {
            tab[i] = tab[i + 1];
        }
        --tailleTab;
    }else{
        for (int i = (int)tailleTab/2 - 1; i < tailleTab - 2; ++i) {
            tab[i] = tab[i + 2];
        }
        tailleTab -= 2;
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

void test(int tab[], size_t tailleTab){
    afficheTab(tab, tailleTab);
    supprimeCentre(tab, tailleTab);
    afficheTab(tab, tailleTab);
}