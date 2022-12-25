//
// Created by ursbe on 25.12.2022.
//

#ifndef EXERCICES_OBJET_H
#define EXERCICES_OBJET_H

#include <iostream>

static int numeroObjets = 0;
static int compeuterObjects = 0;

using namespace std;

class Objet {
public:
    Objet() {
        numero = ++numeroObjets;
        ++compeuterObjects;
    }

    virtual ~Objet() {
        --compeuterObjects;
    }

    void no() const {
        cout << "Numero: " << numero << endl;
    }

    static void prochainNo(){
        cout << "Prochain numero: " << numeroObjets + 1 << endl;
    }

    static void compteur(){
        cout << "Compteur: " << compeuterObjects << endl;
    }

private:
    int numero;

};


#endif //EXERCICES_OBJET_H
