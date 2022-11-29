#include <iostream>

using namespace std;

void affiche();

int main() {

    for (int i = 0; i < 10; ++i) {
        affiche();
    }

    return EXIT_SUCCESS;
}

void affiche(){
    static int compteur = 0;

    cout << "cette fonction a ete appele " << ++compteur << " fois."<< endl;
}