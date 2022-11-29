#include <iostream>

using namespace std;

int main() {

    const int debut1 = 0;
    int i = debut1;

    for( ; i < 10; ++i){
        cout << i << endl;
    }

    i = debut1;

    while (i < 10){
        cout << i++ << endl;
    }

    i = debut1;

    if(i < 10){
        do{
            cout << i << endl;
        } while (i++ < 10);
    }


    // Partie 2

    const int debut2 = 20;

    i = debut2;

    while( i-- > 10){ cout << i << endl; }

    i = debut2;

    for( ; i > 10 ; ){
        cout << --i << endl;
    }

    i = debut2;

    if (i > 10){
        do{
            cout << --i << endl;
        }while( i > 10);
    }

}
