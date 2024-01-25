#include <iostream>
#include <math.h>

using namespace std;

int main()
{

cout << "Nama\t : Yohanes Dimas Pratama" << endl;
cout << "Nim \t : A11.2021.13254" << endl << endl;

    cout << "Tugas Soal Input Menghitung Luas Atau Volume" << endl << endl;

        cout << "1. Menghitung Luas Trapesium" << endl;

            //siat = sisi atas, siba = sisi bawah, tingtrap = tinggi trapesium//
            float siat, siba, tingtrap;

            cout << "Masukkan nilai sisi atas \t : ";
            cin >> siat;
            cout << "Masukkan nilai sisi bawah \t : ";
            cin >> siba;
            cout << "Masukkan nilai tinggi \t\t : ";
            cin >> tingtrap;

            //rumus luas trapesium = ((sisi atas + sisi bawah) * tinggi) / 2//
            int luastrap = ((siat + siba) * tingtrap) / 2;

            cout << "Hasil luas trapesium \t\t : " << luastrap << endl << endl;

        cout << "2. Menghitung Volume Limas Segi Empat" << endl;

            //silas = sisi alas, tinglim = tinggi limas//
            float silas, tinglim;

            cout << "Masukkan nilai sisi alas \t : ";
            cin >> silas;
            cout << "Masukkan nilai tinggi limas \t : ";
            cin >> tinglim;

            //rumus volume limas segi empat = (luas alas * tinggi / 3)//
            int luasalas = pow(silas,2),
                vollim = (luasalas * tinglim) / 3;

            cout << "Hasil volume limas segi empat \t : " << vollim << endl;

    return 0;
}
