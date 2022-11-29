#include <iostream>

using namespace std;

int main() {

    int chiffre;

    cout << "Input 1 chifffres (>=0): ";
    cin >> chiffre;

    cout << chiffre << " est "
         << ( chiffre % 3 == 0 ? chiffre % 5 == 0 ? "multiple de 3 et de 5" : "multiple de 3" :
                chiffre % 5 == 0 ? "multiple de 5" : "ni multiple de 3 ni de 5" ) << endl;

}
