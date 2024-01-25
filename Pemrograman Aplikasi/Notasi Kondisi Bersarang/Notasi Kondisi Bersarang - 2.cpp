#include <iostream>

using namespace std;

int main()
{
    int umur, suhu, absen, harga, hadiah;
    string nama, sekolah, asal, datavaksin;

cout<<"No 1"<<endl;
    cout<<"Nama sekolah: ";
        cin>>sekolah;
    cout<<"Suhu tubuh: ";
        cin>>suhu;
    cout<<"Nomor absen: ";
        cin>>absen;
    if(suhu<38)
    {
        cout<<"Diizinkan mengikuti PTM"<<endl;
            if(absen%2)
                cout<<"Masuk ke kelas A"<<endl;
            else
                cout<<"Masuk ke kelas B"<<endl;
    }
    else
    {
        cout<<"Dilarang mengikuti PTM"<<endl;
    }
    cout<<"Jangan lupa tetap jaga PROKES!!!"<<endl<<endl;
cout<<"No 2"<<endl;
    cout<<"Harga pembelian sepatu (Rp): ";
        cin>>harga;
    if(harga>=5000000)
    {
        cout<<"Silahkan pilih salah satu hadiah!!!"<<endl;
        cout<<"Limited edition shirt Nike (1) / topi Reebok (2): ";
            cin>>hadiah;
            if(hadiah==1)
            {
                cout<<"Selamat anda mendapatkan hadiah LE shirt Nike!!!"<<endl;
            }
            else if(hadiah==2)
            {
                cout<<"Selamat anda mendapatkan hadiah topi Reebok!!!"<<endl;
            }
            else
            {
                cout<<"Tidak valid, mohon untuk memilih sesuai pilihan hadiah yang disediakan"<<endl;
            }
    }
    else
    {
        cout<<"Selamat anda mendapatkan hadiah bandana Adidas!!!"<<endl;
    }
    cout<<"Terimakasih sudah belanja di toko kami :)"<<endl<<endl;
cout<<"No 3"<<endl;
    cout<<"Vaksin ke (belum / pertama / kedua): ";
        cin>>datavaksin;
    cout<<"Nama peserta: ";
        cin>>nama;
    cout<<"Umur: ";
        cin>>umur;
    cout<<"Asal daerah: ";
        cin>>asal;
    if(datavaksin=="belum")
    {
        cout<<"Valid"<<endl;
            if(umur>14)
            {
                cout<<"Boleh ikut vaksin"<<endl;
                    if(asal=="Semarang")
                        cout<<"Golongan 1"<<endl;
                    else
                        cout<<"Golongan 2"<<endl;
            }
            else
            {
                cout<<"Tidak boleh ikut vaksin"<<endl;
            }
    }
    else if(datavaksin=="pertama")
    {
        cout<<"Valid"<<endl;
            if(umur>14)
            {
                cout<<"Boleh ikut vaksin"<<endl;
                    if(asal=="Semarang")
                        cout<<"Golongan 1"<<endl;
                    else
                        cout<<"Golongan 2"<<endl;
            }
            else
            {
                cout<<"Tidak boleh ikut vaksin"<<endl;
            }
    }
    else
    {
     cout<<"Tidak valid"<<endl;
    }
    cout<<"Terimakasih sudah vaksin, ingat vaksin itu penting!!!"<<endl;
    return 0;
}
