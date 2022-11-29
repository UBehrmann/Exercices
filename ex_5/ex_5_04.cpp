#include <iostream>

using namespace std;

void afficheTab(const int tab[], size_t tailleTab);

int main() {

    int tab0[0] = {};
    int tab1[] = {1};
    int tab2[] = {1,2};
    const int tailleTab0 = sizeof(tab0) / sizeof(tab0[0]);
    const int tailleTab1 = sizeof(tab1) / sizeof(tab1[0]);
    const int tailleTab2 = sizeof(tab2) / sizeof(tab2[0]);

    afficheTab(tab0, tailleTab0);
    afficheTab(tab1, tailleTab1);
    afficheTab(tab2, tailleTab2);

    return EXIT_SUCCESS;
}

void afficheTab(const int tab[], size_t tailleTab){

    cout << '[';
    for (int i = 0; i < tailleTab; ++i) {

        if(i != 0) cout << ", ";

        cout << tab[i];
    }
    cout << ']' << endl;
}
