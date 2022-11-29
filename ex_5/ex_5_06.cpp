#include <iostream>

using namespace std;

void permutation(int tab[], int tailleTab);
void echangePremierDernier(int tab[], size_t tailleTab);
void afficheTab(const int tab[], int tailleTab);

int main() {

    int tab[] = {0, 1, 2, 3,4, 5,6,7,8,9, 10};
    const size_t TAILLE_TAB = sizeof(tab) / sizeof(tab[0]);

    afficheTab(tab, TAILLE_TAB);
    echangePremierDernier(tab,TAILLE_TAB);
    afficheTab(tab, TAILLE_TAB);

    return EXIT_SUCCESS;
}

void permutation(int tab[], int tailleTab){

    int tmp;

    for (int i = 0; i < tailleTab / 2 + tailleTab % 2; ++i) {
        tmp = tab[i];

        tab[i] = tab[tailleTab - i - 1];
        tab[tailleTab - i - 1] = tmp;
    }
}

void echangePremierDernier(int tab[], size_t tailleTab){
    if(tailleTab){
        int tmp = tab[0];
        tab[0] = tab[tailleTab-1];
        tab[tailleTab-1] = tmp;
    }
}

void afficheTab(const int tab[], int tailleTab){
    for (int i = 0; i < tailleTab; ++i) {
        cout << tab[i] << " ";
    }

    cout << endl << endl;
}