// PRG1_E
//---------------------------------------------------------------------------------
// Fichier        : main.cpp
// Auteur(s)      : Urs Behrmann
// Date           : 10.11.2022
// But            : Remplace chaques valeurs paires d'un tableau classique 1D d'entiers (type int)
//                  par une valeur donnée et  vérifier le bon fonctionnement de la fonction
// Modifications  :
// Remarque(s)    : NILL
// Compilateur    : MinGW w64 9.0 / C++20
//--------------------------------------------------------------------------------------------------

#include <iostream>     // Gestion des I/O
#include <stdlib.h>     // Return Success
#include <limits>       // numeric_limits

using namespace std;

void remplacePaire(int tab[], size_t tailleTab, int valeurPourRemplace);
void afficheTab(const int tab[], size_t tailleTab);
bool controleRemplacement(const int tab[], size_t tailleTab, int valeurPourRemplace);
void test(int tab[], size_t tailleTab, int valeurPourRemplce);

int main() {

    // Variable
    int tab1[] = {0, 1, 2,3,4,5,6,7,8,9, 11};
    const size_t TAILLE_TAB1 = sizeof(tab1) / sizeof(tab1[0]);

    int tab2[] = {0, 1, 2,3,};
    const size_t TAILLE_TAB2 = sizeof(tab2) / sizeof(tab2[0]);

    // Programme
    test(tab1, TAILLE_TAB1, 10);
    test(tab2, TAILLE_TAB2, 33);

    //Fin de programme
    cout << "Pressez ENTER pour quitter";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');    // Vider le buffer
    return EXIT_SUCCESS;
}

//---------------------------------------------------------------------------------
// nom         remplacePaire
// but         Remplace chaques valeurs paires d'un tableau classique 1D d'entiers (type int) par
//             une valeur donnée
// param       int tab[]                : tableau dans lequel il faut change les valeurs
//             size_t tailleTab         : taille du tableau reçu
//             int valeurPourRemplace   : Valeur qui sera mis dans le tableau
// return      valeur retourné par la fonction
// exception   n/a
//---------------------------------------------------------------------------------
void remplacePaire(int tab[], size_t tailleTab, int valeurPourRemplace){

    for (int i = 0; i < (int)tailleTab; i = i + 2)
        tab[i] = valeurPourRemplace;
}

//---------------------------------------------------------------------------------
// nom         controleRemplacement
// but         Controle si le remplacement a été fait
// param       const int tab[]          : tableau qui va être vérifié
//             size_t tailleTab         : taille du tableau reçu
//             int valeurPourRemplace   : Valeur qui devrait être dans le tableau
// return      bool test                : retourne si le remplacement a été fait
// exception   n/a
//---------------------------------------------------------------------------------
bool controleRemplacement(const int tab[], size_t tailleTab, int valeurPourRemplace){

    bool test = false;

    for (int i = 0; i < (int)tailleTab; i = i + 2)
        test = tab[i] == valeurPourRemplace;

    return test;
}

//---------------------------------------------------------------------------------
// nom         test
// but         test la fonction remplacePaire
// param       int tab[]                : tableau dans lequel il faut change les valeurs
//             size_t tailleTab         : taille du tableau reçu
//             int valeurPourRemplace   : Valeur qui sera mis dans le tableau
// return      NULL
// exception   n/a
//---------------------------------------------------------------------------------
void test(int tab[], size_t tailleTab, int valeurPourRemplce){
    afficheTab(tab, tailleTab);

    remplacePaire(tab, tailleTab, valeurPourRemplce);

    if (controleRemplacement(tab, tailleTab, valeurPourRemplce))
        cout << "Les valeurs paires ont ete changees." << endl;
    else
        cout << "Les valeurs paires n'ont pas ete changees." << endl;

    afficheTab(tab, tailleTab);

    cout << endl;
}

//---------------------------------------------------------------------------------
// nom         afficheTab
// but         Afficher un tableau d'entier
// param       int tab[]        : tableau a afficher
//             size_t tailleTab : taille du tableau reçu
// return      NULL
// exception   n/a
//---------------------------------------------------------------------------------
void afficheTab(const int tab[], size_t tailleTab){

    cout << '[';
    for (int i = 0; i < (int)tailleTab; ++i) {

        if(i != 0) cout << ", ";

        cout << tab[i];
    }
    cout << ']' << endl;
}