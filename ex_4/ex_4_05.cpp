#include <iostream>

using namespace std;

bool afficheCaracteres(unsigned char caractere1, unsigned char caractere2){

    if(caractere1 < caractere2){
        for (unsigned char i = ++caractere1; i < caractere2; ++i)
            cout << (unsigned char)i;

        cout << endl;
        return true;
    }
    else{
        return false;
    }
}

int main() {

    cout << afficheCaracteres('A', 'E');
    cout << afficheCaracteres('C', 'A');

    return EXIT_SUCCESS;
}
