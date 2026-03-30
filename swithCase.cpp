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