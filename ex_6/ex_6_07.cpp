#include <iostream>
#include <string>

using namespace std;

string milieu(const string& chaine);

int main() {

    cout << milieu("ABCD") << endl;
    cout << milieu("ABCDE") << endl;
    cout << milieu("ABCDEF") << endl;

    return EXIT_SUCCESS;
}

string milieu(const string& chaine){

    bool chainePaire = chaine.size()%2 == 0;

    return string(chaine, chaine.size()/2 - chainePaire, 2 - chaine.size()%2);

}
