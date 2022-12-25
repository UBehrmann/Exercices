#include <iostream>

using namespace std;

class C {
public:
    C(int chiffre = 0) : chiffre(chiffre){};

    C operator==(const C c2){
        return chiffre == c2.getChiffre();
    }

    bool operator!=(const C c2){
        return chiffre != c2.getChiffre();
    }

    C& operator++(){
        ++chiffre;
        return *this;
    }

    C operator++(int){
        C old = *this;
        ++chiffre;
        return old;
    }

    friend C operator+(C C1, const C& C2){
        C1.chiffre += C2.chiffre;
        return C1;
    }

    C operator+=(const C& C2){
        chiffre += C2.chiffre;
        return *this;
    }


    int getChiffre() const { return chiffre; }

private:
    int chiffre;

};

ostream& operator<<(std::ostream &out, const C c) {
    out << c.getChiffre();
    return out;
};

int main() {
     C c0, c1(1), c2 = 5;
    const C C3{7};
    cout << c0 << endl
         << c1 << endl;
    cout << boolalpha;
    cout << (c0 == c1) << endl;
    cout << (c0 != c1) << endl;
    cout << noboolalpha;
    cout << c1++ << endl;
    cout << c1 << endl;
    cout << ++c1 << endl;
    cout << c1 + c2 << endl;
    c1 += c2;
    cout << c1 << endl;
    cout << C3 + c2 << endl;
    return EXIT_SUCCESS;
}
