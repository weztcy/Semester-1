#include <iostream>

using namespace std;

int main()
{
int suhu, nilai;
string barang;
//No 1, menentukan suhu badan apakah normal, demam, atau hipotermia.
    cout<<"Masukkan suhu tubuh: ";
        cin>>suhu;
    if(suhu>38)
    {
        cout<<"Anda terkena demam"<<endl;
    }
    else if(suhu<35)
    {
        cout<<"Anda terkena hipotermia"<<endl;
    }
    else
    {
        cout<<"Suhu tubuh anda normal"<<endl;
    }
//No 2, mengklasifikasikan nilai angka kedalam huruf A B atau C.
    cout<<"Masukkan nilai ulangan: ";
        cin>>nilai;
    if(nilai<80)
    {
        cout<<"Nilai anda C"<<endl;
    }
    else if(nilai<90)
    {
        cout<<"Nilai anda B"<<endl;
    }
    else      {
        cout<<"Nilai anda A"<<endl;
    }
//No 3, menentukan barang yang mendapatkan voucher belanja sebesar 250K, 150K dan 75K atau tidak mendapatkan voucher belanja sama sekali.
    cout<<"Masukkan merk sepatu yang dibeli: ";
        cin>>barang;
    if(barang=="reebok")
    {
        cout<<"Selamat anda mendapatkan voucher belanja 150K"<<endl;
    }
    else if(barang=="nike")
    {
        cout<<"Selamat anda mendapatkan voucher belanja 250K"<<endl;
    }
    else if(barang=="adidas")
    {
        cout<<"Selamat anda mendapatkan voucher belanja 75K"<<endl;
    }
    else
    {
        cout<<"Sayang sekali anda tidak mendapatkan voucher belanja"<<endl;
    }
    return 0;
}
