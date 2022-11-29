#include <iostream>

using namespace std;

void afficheTab(const int tab[], size_t tailleTab);
void test(int tab[], size_t tailleTab);

int main() {

    // Variable
    int tab1[] = {0, 1, 2,3,4,5,6,7,8,9, 10};
    const size_t TAILLE_TAB1 = sizeof(tab1) / sizeof(tab1[0]);

    int tab2[] = {0, 1, 5,3,4,5,6,7,8,9};
    const size_t TAILLE_TAB2 = sizeof(tab2) / sizeof(tab2[0]);

    int tab3[] = { 1};
    const size_t TAILLE_TAB3 = sizeof(tab3) / sizeof(tab3[0]);

    test(tab1, TAILLE_TAB1);
    test(tab2, TAILLE_TAB2);
    test(tab3, TAILLE_TAB3);

    return EXIT_SUCCESS;
}

bool estCroissant(const int tab[], size_t tailleTab){
    int compteur = 0;
    bool estCroissant = true;

    while(++compteur < (int)tailleTab && estCroissant){
        if (tab[compteur-1] > tab[compteur])
            estCroissant = false;
    }

    return estCroissant;
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
    if (estCroissant(tab, tailleTab))
        cout << "Le tableau est croissant." << endl;
    else
        cout << "Le tableau n'est pas croissant." << endl;
}