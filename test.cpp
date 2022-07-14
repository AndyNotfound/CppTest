#include<stdio.h>
#include<iostream>

using namespace std;
int arrLamaSewa[20], arrHargaSewa[20], arrtotalBayar[20], totalBayar, lamaSewa, hargaSewa;
string arrNamaPenyewa[20], arrJudulFilm[20], arrJenisFilm[20], arrBonus[20], inputDataLagi, namaPenyewa, judulFilm, kodeFilm, jenisFilm, bonus;

void menu (int i){
        cout<<"\nNama Penyewa        : "; cin>>namaPenyewa;
        cout<<"Judul Film          : "; cin>>judulFilm;
        cout<<"Kode Film (A/D/K)   : "; cin>>kodeFilm;
            if (kodeFilm == "D" || kodeFilm =="d"){
                jenisFilm = "Drama";
                hargaSewa = 4000;
            } else if (kodeFilm == "A" || kodeFilm == "a"){
                jenisFilm = "Action";
                hargaSewa = 5000;
            } else if (kodeFilm == "K" || kodeFilm == "k"){
                jenisFilm = "Komedi";
                hargaSewa = 3000;
            } else {
                cout << "Pilihan yang Anda pilih tidak valid!";
            }
        cout<<"\nLama Sewa           : "; cin>>lamaSewa;
            if(lamaSewa < 3){
                bonus = "Tidak ada bonus!";
            } else if (lamaSewa >=3 ){
                bonus = "Sticker";
            } else if (lamaSewa >=5){
                bonus = "Gelas";
            } else {
                cout<<"Pilihan yang Anda pilih tidak valid!"<<endl;
            }

        totalBayar = hargaSewa * lamaSewa;
        cout<<"\nAda data lagi (Y/N) : "; cin>>inputDataLagi;
        arrNamaPenyewa[i] = namaPenyewa; arrJudulFilm[i] = judulFilm; arrJenisFilm[i] = jenisFilm; arrHargaSewa[i] = hargaSewa; arrLamaSewa[i] = lamaSewa; arrtotalBayar[i] = totalBayar; arrBonus[i] = bonus; arrtotalBayar[i] = totalBayar;
}
int main (){
    menu(0);
    for (int i = 1; i < 20; i++){
        if(inputDataLagi == "y"){
            menu(i);
        } else{
            if (arrLamaSewa[i-1] != 0){
                cout<<"\n=============================================================================================================================================================="<<endl;
                cout<<"\nNama Penyewa\t\tJudul Film\t\tJenis Film\t\tHarga Sewa\t\tLama Sewa\t\tTotal Bayar\t\tBonus"<<endl;
                cout<<"\n==============================================================================================================================================================\n"<<endl;
                cout<<arrNamaPenyewa[i-1]<<"\t\t\t"<<arrJudulFilm[i-1]<<"\t\t\t"<<arrJenisFilm[i-1]<<"\t\t\t"<<arrHargaSewa[i-1]<<"\t\t\t"<<arrLamaSewa[i-1]<<"\t\t\t"<<arrtotalBayar[i-1]<<"\t\t\t"<<arrBonus[i-1]<<"\n"<<endl;
                break;
            }
        }
    }
}
