#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

    const int NBRE_NOTES = 4;

    double note1, note2, note3, note4;
    double moyenne;

    cout << "Entrez " << NBRE_NOTES << " notes: ";
    cin >> note1 >> note2 >> note3 >> note4;

    moyenne = (note1 + note2 + note3 + note4) / NBRE_NOTES;

    cout << fixed << setprecision(1) << "Moyenne = " << moyenne;

    if (moyenne > 5.5){
        cout << " Excellent";
    } else if (moyenne > 5){
        cout << " Tres bien";
    }else if (moyenne > 4.5){
        cout << " Bien";
    } else if (moyenne > 4){
        cout << " Moyen";
    }else{
        cout << " Insuffisant";
    }
}
