#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;

    //perulangan dengan FOR 
    //mencetak tulisan sebsanyak 5 kali
    cout<<"perulangan FOR"<<endl;
    for(int i=0; i<=5; i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka acak yang berbeda 
    srand(time(0));

    //perulangan  dengan WHILE
    cout<<"perulangan WHILE"<<endl;
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"angka acak: "<<x<<endl;
        x = rand()%10;
    }

    cout<<"bilangan acak while yang terakhir ="<<x <<endl;
    cout<<endl;

    //perulangan dengan DO...WHILE
    cout<<"perulangan DO...WHILE"<<endl;
    x = 1 + rand()%10;
    do{
        cout<<"angka acak: "<<x<<endl;
        x = rand()%10;
    }while(x<=5);
    cout<<"bilangan acak do...while yang terakhir ="<<x <<endl;
    cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float niLB,NiLM,rerata;
    string status;

    cout<<"Masukan Nilai Matematika = ";
    cin>>NiLM;
    cout<<"Masukan Nilai Bahasa Inggris = ";
    cin>>niLB;

    rerata = (niLB+NiLM)/2;
    if (!(rerata>=60) )
        status = "Lulus";
    else 
        status = "Tidak Lulus";

    cout<<"Status Kelulusan = "<<status<<" , dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika or
#include <iostream>
using namespace std;

int maint(){
    float niLB,NiLM,rerata;
    string status;

    float niLB,NiLM,rerata;
    string status;

    cout<<"masukan nilai matematika = ";
    cin>>NiLM;
    cout<<"masukan nilai bahasa inggris = ";
    cin>>niLB;

    rerata = (niLB+NiLM)/2;

    if (rerata>=60 || niLB>=70)
        status = "Lulus";
    else 
        status = "Tidak Lulus";
    cout<<"Status Kelulusan = "<<status<<" , dengan nilai rata-rata = "<<rerata<<endl;
}

//logical AND
#include <iostream> 
using namespace std;

int main(){
    float niLB,NiLM,rerata;
    string status;

    cout<<"Masukan Nilai Matematika = ";
    cin>>NiLM;                                       
    cout<<"Masukan Nilai Bahasa Inggris = ";
    cin>>niLB;

    rerata = (niLB+NiLM)/2;

    if ((rerata >= 60) && (niLB >= 70))
        status = "Lulus";
    else 
        status = "Tidak Lulus";

    cout<<"Status Kelulusan = "<<status<<" , dengan nilai rata-rata = "<<rerata<<endl;
}