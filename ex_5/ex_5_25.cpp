// PRG1_E
//---------------------------------------------------------------------------------
// Fichier        : ex_5_25.cpp
// Auteur(s)      : Urs Behrmann
// But            : déterminer si 2 vecteurs 1D d'entiers (de type int) sont égaux ou pas
// Modifications  :
// Remarque(s)    : NILL
// Compilateur    : MinGW w64 9.0 / C++20
//---------------------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;
using Vecteur = vector<int>;

void test(const Vecteur& vecteur1, const Vecteur& vecteur2);
bool estDansVecteur(const Vecteur& vecteur, int valeur);
bool sontEgaux(const Vecteur& vecteur1, const Vecteur& vecteur2);
void afficheVecteur(const Vecteur &vecteur);

int main() {

    const Vecteur vecteur1 = {1};
    const Vecteur vecteur2 = {1, 2};
    const Vecteur vecteur3 = {1, 2, 1};
    const Vecteur vecteur4 = {1, 4};

    test(vecteur1, vecteur2);
    test(vecteur2, vecteur3);
    test(vecteur3, vecteur4);
    test(vecteur1, vecteur4);

    return EXIT_SUCCESS;
}

/** Test si les deux vecteurs contiennent les mêmes valeurs et affiche le resultat
 * -----------------------------------------------------------------------------------------------------------------
 * @param vecteur1          :   Premier vecteur envoye
 * @param vecteur2          :   Deuxieme vecteur envoye
 * -----------------------------------------------------------------------------------------------------------------
 * @return                  : -
 * @exception               : -
 */
void test(const Vecteur& vecteur1, const Vecteur& vecteur2){
    cout << "Vecteur 1: ";
    afficheVecteur(vecteur1);

    cout << "Vecteur 2: ";
    afficheVecteur(vecteur2);

    if(sontEgaux(vecteur1, vecteur2) && sontEgaux(vecteur2, vecteur1))
        cout << "Les vecteurs sont egaux." << endl << endl;
    else
        cout << "Les vecteurs ne sont pas egaux." << endl << endl;
}

/** Cherche si le vecteur contient la valeur ou pas
 * -----------------------------------------------------------------------------------------------------------------
 * @param vecteur           :   Vecteur dans lequel la recherche est fait
 * @param valeur            :   Valeur qui est cherché
 * -----------------------------------------------------------------------------------------------------------------
 * @return                  :   Renvoie si le vecteur a ete trouve ou pas
 * @exception               :   -
 */
bool estDansVecteur(const Vecteur& vecteur, int valeur){
    return find(vecteur.begin(), vecteur.end(), valeur) != vecteur.end();
}

/** Test si tout les valeurs du vecteur1 sont dans le vecteur2
 * -----------------------------------------------------------------------------------------------------------------
 * @param vecteur1          :   Vecteur duquelle les valeurs sont pris
 * @param vecteur2          :   Vecteur sur lequelle est teste
 * -----------------------------------------------------------------------------------------------------------------
 * @return                  : Vrai si tout les valeurs du vecteur1 sont dans le vecteur2, sinon faux
 * @exception               : -
 */
bool sontEgaux(const Vecteur& vecteur1, const Vecteur& vecteur2){
    for (int valeur: vecteur1)
        if (!estDansVecteur(vecteur2, valeur))
            return false;

    return true;
}

/** Affiche un vecteur
 * -----------------------------------------------------------------------------------------------------------------
 * @param vecteur           :   Vecteur a afficher
 * -----------------------------------------------------------------------------------------------------------------
 * @return                  :   -
 * @exception               :   -
 */
void afficheVecteur(const Vecteur& vecteur){
    cout << '[';
    for (Vecteur::size_type i = 0; i < vecteur.size(); ++i) {

        if(i != 0) cout << ", ";

        cout << vecteur[i];
    }
    cout << ']' << endl;
}