#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //lingkaran//
    float jari2, pi;
    //segitiga//
    float alas, tinggi;

    cout << "Masukkan data untuk luas lingkaran: " << endl;
    cout << "nilai jari-jari: ";
        cin >> jari2;
    cout << "Nilai pi: ";
        cin >> pi;

    int luaslingkaran = pow(jari2,2) * pi;
    cout << "Luas lingkaran : " << luaslingkaran << endl;

    cout << "Masukkan data untuk luas segitiga: " << endl;
    cout << "Nilai alas: ";
        cin >> alas;
    cout << "Nilai tinggi: ";
        cin >> tinggi;

    int luassegitiga = alas * tinggi / 2;
    cout << "Luas segitiga: " << luassegitiga << endl;

    int volumebola = 4/3 * pi * pow(jari2,3);
    cout << "Volume bola: " << volumebola << endl;

    int luasalas = pi * pow(jari2,2);
    int volumekerucut = 1/3 * luasalas * tinggi;
    cout << "Volume kerucut: " << volumekerucut << endl;

    cout << "Hello world!" << endl;
    return 0;
}
