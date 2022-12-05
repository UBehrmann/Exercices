#include <iostream>

using namespace std;

int main() {

    string input, rue, numero;
    const string chiffre = {"1234567890"};

    // input
    cout << "Entrez le nom et le numero de la rue :";
    getline(cin, input);

    // get info
    rue = input.substr(0, input.size() - (input.size() - input.find_first_of(chiffre)));
    numero = input.substr(input.find_first_of(chiffre));

    // write infos
    cout << "Le nom de la rue est : " << rue << endl;
    cout << "Le no de la rue est : " << numero << endl;

    return EXIT_SUCCESS;
}
