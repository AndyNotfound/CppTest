#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;
int arrLamaSewa[20], arrHargaSewa[20], arrtotalBayar[20], totalBayar, lamaSewa, hargaSewa, totalBelanja;
string arrNamaPenyewa[20], arrJudulFilm[20], arrJenisFilm[20], arrBonus[20], inputDataLagi, namaPenyewa, judulFilm, kodeFilm, jenisFilm, bonus;

void menu (int i){
    system("clear");
    cout<<"\nNama Penyewa        : "; getline(cin, namaPenyewa);
    cout<<"Judul Film          : "; getline(cin, judulFilm);
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
    totalBelanja+=totalBayar;
    cout<<"\nAda data lagi (Y/N) : "; cin>>inputDataLagi;
    cin.ignore();
    arrNamaPenyewa[i] = namaPenyewa; arrJudulFilm[i] = judulFilm; arrJenisFilm[i] = jenisFilm; arrHargaSewa[i] = hargaSewa; arrLamaSewa[i] = lamaSewa; arrtotalBayar[i] = totalBayar; arrBonus[i] = bonus; arrtotalBayar[i] = totalBayar;
}

void show(){
    cout<<"\n========================================================================================================================"<<endl;
    cout<<"\nNama Penyewa\tJudul Film\tJenis Film\tHarga Sewa\tLama Sewa\tTotal Bayar\tBonus"<<endl;
    cout<<"\n========================================================================================================================\n"<<endl;
    for (int i = 0; i < 20; i++){
    	if (arrLamaSewa[i] != 0){
			cout<<arrNamaPenyewa[i]<<"\t\t"<<arrJudulFilm[i]<<"\t\t"<<arrJenisFilm[i]<<"\t\t"<<arrHargaSewa[i]<<"\t\t"<<arrLamaSewa[i]<<"\t\t"<<arrtotalBayar[i]<<"\t\t"<<arrBonus[i]<<"\n"<<endl;
		} else {
			break;
		}
	}
   cout<<"\n\n========================================================================================================================"<<endl;
   cout<<"\nTotal Seluruhnya\t\t\t\t\t: "<<totalBelanja<<endl;
}

int main (){
    menu(0);
    for (int i = 1; i < 20; i++){
        if(inputDataLagi == "y"){
            menu(i);
        } else{
    		show();
        	break;
        }
    }
}
