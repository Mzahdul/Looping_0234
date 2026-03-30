#include <iostream>
using namespace std;

//deklarasi variable global
int kodejurusan;
string namajurusan;
string statuskota;

//prosedur input 
void input (){
    cout<< "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout<< "1.teknologi informasi" << endl;
    cout<< "2. teknik elektro" << endl;
    cout<< "3. sistem informasi" << endl;
    cout<< "------------------------------" << endl;
    cout<< "Masukan kode jurusan (1-3): ";
    cin>> kodejurusan;
}

//prosedur untuk pengecekan kondisi
void pilihanjurusan() {
    switch (kodejurusan) {
        case 1:
            namajurusan = "Teknologi Informasi";
            statuskota = "tersedia (15 kursi)";
            break;
        case 2:
            namajurusan = "Teknik Elektro";
            statuskota = "kuota penuh";
            break;
        case 3:
            namajurusan = "Sistem Informasi";
            statuskota = "tersedia (5 kursi)";
            break;
        default:
            namajurusan = "tidak diketahui";
            statuskota = "Error: Kode Tidak Valid";
    }
}