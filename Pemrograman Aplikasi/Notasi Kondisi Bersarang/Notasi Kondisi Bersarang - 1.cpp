#include <iostream>

using namespace std;

int main()
{
//Jika laki-laki dan perempuan
    int absen;
    string kelamin;
    cout<<"Jenis Kelamin: ";
        cin>>kelamin;
    cout<<"Nomor Absen: ";
        cin>>absen;
    if(kelamin=="Laki-laki")
    {
        cout<<"Mengerjakan ujian didalam kelas"<<endl;
            if(absen%2==0)
            {
                cout<<"Mengerjakan soal A"<<endl;
            }
            else
            {
                cout<<"Mengerjakan soal B"<<endl;
            }

    }
    else if(kelamin=="Perempuan")
    {
        cout<<"Mengerjakan ujian diluar kelas"<<endl;
            if(absen%2==0)
            {
                cout<<"Mengerjakan soal A"<<endl;
            }
            else
            {
                cout<<"Mengerjakan soal B"<<endl;
            }
    }
    else
    {
        cout<<"Tidak valid";
    }
    return 0;
}
