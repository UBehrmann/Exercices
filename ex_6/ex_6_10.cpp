#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string nom, prenom, acronyme;

    cout << "Entrez votre prenom et votre nom :";
    cin >> prenom >> nom;

    acronyme = prenom.substr(0,1) + nom.substr(0,1) + nom.substr(nom.size()-1,1);

    for(char& c : acronyme) c = (char)toupper(c);

    cout << "Votre prenom est   : " << prenom << endl;
    cout << "Votre nom est      : " << nom << endl;
    cout << "Votre acronyme est : " << acronyme << endl;
    return EXIT_SUCCESS;
}
