#include <iostream>
#include <string>

using namespace std;

int romaineModerne(const string& nombre);
int romainEntier(const char lettre);
void test(const string& nombre);

int main() {

    /*
     * M = 1000
     * D = 500
     * C = 100
     * L = 50
     * X = 10
     * V = 5
     * I = 1
     */

    string nombre1 = "MMXXII";      // 2022
    string nombre2 = "MCMXCII";     // 1992
    string nombre3 = "DCLXVI";      //666

    test(nombre1);
    test(nombre2);
    test(nombre3);


    return EXIT_SUCCESS;
}

void test(const string& nombre){

    cout << nombre << " = " << romaineModerne(nombre) << endl;

}

int romaineModerne(const string& nombre){
    int nombreConvertie = 0;
    int chiffrePrecedant = 0;

    for (char chiffreRomain : nombre) {


        if (chiffrePrecedant < romainEntier(chiffreRomain))
            nombreConvertie += romainEntier(chiffreRomain) - 2 * chiffrePrecedant;
        else
            nombreConvertie += romainEntier(chiffreRomain);

        chiffrePrecedant = romainEntier(chiffreRomain);
    }

    return nombreConvertie;
}

int romainEntier(const char lettre){
    switch (lettre) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: return 0;
    }
}


