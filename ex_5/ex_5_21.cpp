#include <iostream>
#include <array>

using namespace std;

const size_t TAILLE_ARRAY = 3;

void afficheArray(array<int, TAILLE_ARRAY>& array);

int main() {

    array<int, TAILLE_ARRAY> array = {1, 2, 3};

    afficheArray(array);

    cout << "Front: " << array.front()<< endl;
    cout << "Back: " << array.back()<< endl;

    cout << "Remet a 0" << endl;
    array.fill(0);

    afficheArray(array);

    return EXIT_SUCCESS;
}

void afficheArray(array<int, TAILLE_ARRAY>& array){
    for (size_t i = 0; i < array.size(); ++i) {
        cout << array[i];
    }
    cout << endl;
}
