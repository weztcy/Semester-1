#include <iostream>

using namespace std;

int main()
{
//No 1//
    float bil1, bil2, bil3, min, max;
    cout<<"Bilangan 1: ";
        cin>>bil1;
    cout<<"Bilangan 2: ";
        cin>>bil2;
    cout<<"Bilangan 3: ";
        cin>>bil3;
    cout<<endl;
    int hasil1=bil1*4;
        cout<<"Bilangan 1 menjadi = "<<hasil1<<endl;
    int hasil2=bil2/2;
        cout<<"Bilangan 2 menjadi = "<<hasil2<<endl;
    int hasil3=bil3+20;
        cout<<"Bilangan 3 menjadi = "<<hasil3<<endl;
    if(hasil1<=hasil2 && hasil1<=hasil3)
    {
        min=hasil1;
    }
    else if(hasil2<=hasil3)
    {
        min=hasil2;
    }
    else
    {
        min=hasil3;
    }

    if(hasil3>=hasil2 && hasil1<=hasil3)
    {
        max=hasil3;
    }
    else if(hasil2>=hasil3)
    {
        max=hasil2;
    }
    else
    {
        max=hasil1;
    }
    cout << endl;
    cout<< ("Bilangan terbesar adalah = ")<< max <<endl;
    cout<< ("Bilangan terkecil adalah = ")<< min <<endl;
    cout<<endl;
//No 2//
    string nama;
    float umur, tinggi;
    cout<<"Nama: ";
        cin>>nama;
    cout<<"Umur: ";
        cin>>umur;
    cout<<"Tinggi badan: ";
        cin>>tinggi;
    cout<<"Nama: "<<nama<<endl;
    if(umur<=17)
    {
        if(tinggi>165)
        {
            cout<<"Diterima sebagai staff administrasi"<<endl;
        }
        else
        {
            cout<<"Tidak diterima sebagai pegawai"<<endl;
        }
    }
    else if(umur<=30)
    {
        if(tinggi>165)
        {
            cout<<"Diterima sebagai staff administrasi"<<endl;
        }
        else
        {
            cout<<"Tidak diterima sebagai pegawai"<<endl;
        }
    }
    else if(umur<=40)
    {
        if(tinggi>170)
        {
            cout<<"Diterima sebagai kepala admin"<<endl;
        }
        else if(tinggi>=160)
        {
            cout<<"Diterima staff admin"<<endl;
        }
        else
        {
            cout<<"Tidak diterima senagai pegawai"<<endl;
        }
    }
    else
    {
        cout<<"Tidak diterima sebagai pegawai"<<endl;
    }
//No 3//
    int jam, menit, detik, nomor, saldo, biaya, bonus;
    string nama2;

    cout << "Nama Provider\t: ";
    cin >> nama2;
    cout << "Nomor Telepon\t: ";
    cin >> nomor;
    cout << "Durasi Jam\t: ";
    cin>> jam;
    cout << "Durasi Menit\t: ";
    cin >> menit;
    cout << "Durasi Detik\t: ";
    cin >> detik;
    cout << "Saldo Pulsa\t: ";
    cin >> saldo;

    cout << "Nama Provider: " << nama << endl;
    cout << "Nomor Telepon: " << nomor << endl;
    detik = (jam*3600)+(menit*60)+detik;
    cout << "Ubah Jam+Menit+Detik	: " << detik; cout << " detik" << endl;
    biaya = (detik/30)*1000;
    cout << "Total Pengeluaran Pulsa : " << biaya; cout << " rupiah" << endl;
    if ((biaya>=10000) and (biaya<20000))
    {
        bonus=1000;
    }
    else if ((biaya>=20000) and (biaya<40000))
    {
        bonus=5000;
    }
    else if (biaya>=40000)
    {
        bonus=10000;

    }
    else
    {
        bonus=0;
    }
    cout << "Bonus Pulsa: " << bonus; cout << " rupiah" << endl;
    saldo = saldo-biaya+bonus;
    cout << "Saldo Pulsa sekarang: " << saldo; cout << " rupiah" << endl;
    return 0;
}

