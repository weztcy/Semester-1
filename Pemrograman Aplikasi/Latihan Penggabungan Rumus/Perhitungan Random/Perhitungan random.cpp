#include <iostream>

using namespace std;

int main()
{
    int angka1, angka2, angka3;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan angka ketiga: ";
    cin >> angka3;

    int sum1 = angka1 + angka2;
    int sum2 = sum1 - angka3;

    cout << "Penjumlahan angka pertama dan angka kedua :" << sum1 << endl;
    cout << "angka1 + angka2 :" << sum2 << endl;
    return 0;
}
