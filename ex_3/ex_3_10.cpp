#include <iostream>

using namespace std;

int main() {

    int chiffre1, chiffre2, chiffre3;
    int temp;


    cout << "Input 3 chifffres";
    cin >> chiffre1 >> chiffre2 >> chiffre3;

    if ( chiffre1 > chiffre2){
        temp = chiffre1;
        chiffre1 = chiffre2;
        chiffre2 = temp;
    }

    if ( chiffre1 > chiffre3) {
        temp = chiffre1;
        chiffre1 = chiffre3;
        chiffre3 = temp;
    }

    if ( chiffre2 > chiffre3) {
        temp = chiffre2;
        chiffre2 = chiffre3;
        chiffre3 = temp;
    }

    cout << "Les 3 entiers tries par ordre croissant : "
         << chiffre1 << " < " << chiffre2 << " < " << chiffre3 << endl;

}
