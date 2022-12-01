#include <iostream>
#include <string>

using namespace std;

int romaineModerne(const string& nombre);
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
    int chiffre = 0;
    int chiffrePrecedant = 0;

    for (char chiffreRomain : nombre) {
        switch (chiffreRomain) {
            case 'M': chiffre = 1000; break;
            case 'D': chiffre = 500; break;
            case 'C': chiffre = 100; break;
            case 'L': chiffre = 50; break;
            case 'X': chiffre = 10; break;
            case 'V': chiffre = 5; break;
            case 'I': chiffre = 1; break;
            default: chiffre = 0; break;
        }

        if (chiffrePrecedant < chiffre)
            nombreConvertie += chiffre - chiffrePrecedant - chiffrePrecedant;
        else
            nombreConvertie += chiffre;

        chiffrePrecedant = chiffre;
    }

    return nombreConvertie;
}


