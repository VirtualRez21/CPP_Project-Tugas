#include<iostream>
#define cetak <<
using namespace std;

int banyakTambah = 0;
int pilih;

void input();
void output();
void menu();
void ascii();
void notif();

struct ultah{
    int tanggal;
    string bulan;
    int tahun;
};
struct dataLain{
    string nama;
    string tempatLahir;
    string kedudukan;
};

struct utama{
    struct ultah dataTanggal;
    struct dataLain dataOther;
};

struct utama dataUtama[20];

int main(){
    while(true){

    menu();

        if(pilih == 1) {
            input();
            system("pause");
            system("cls");
        }

        else if(pilih == 2) {
            output();
			system("pause");
            system("cls");
        }
        else if(pilih == 3) {
            break;
        }
        else{
            notif();
			system("pause");
            system("cls");
        }
    }

}

void input(){
    system("color e");
    string namaa;
    cout cetak "=====-[Menu Tambah Data]-=====================" cetak endl;
    cout cetak "[+]> Masukkan Nama Baru             : "; cin >> dataUtama[banyakTambah].dataOther.nama;
    cout cetak "[+]> Masukkan Tanggal Lahir         : "; cin >> dataUtama[banyakTambah].dataTanggal.tanggal;
    cout cetak "[+]> Masukkan Bulan Lahir           : "; cin >> dataUtama[banyakTambah].dataTanggal.bulan;
    cout cetak "[+]> Masukkan Tahun Lahir           : "; cin >> dataUtama[banyakTambah].dataTanggal.tahun;
    cout cetak "[+]> Masukkan Tempat Lahir          : "; cin >> dataUtama[banyakTambah].dataOther.tempatLahir;
    cout cetak "[+]> Kedudukan Dikeluarga Sebagai   : "; cin >> dataUtama[banyakTambah].dataOther.kedudukan;
    cout cetak endl;

    banyakTambah += 1;
}

void output(){

    if(banyakTambah == 0){
    	system("color c");
        cout cetak "================-[Notifikasi]-================\n";
        cout cetak "      [!]> Maaf, Data Tidak Tersedia <[!]\n\n";
    }

    else{
    	system("color b");
        cout cetak "=====-[Menu Lihat Data]-=======================\n" cetak endl;
        for(int i = 0; i < banyakTambah; i++) {
            cout cetak "=================-[Data Ke-" cetak (i+1) cetak "]-=================" cetak endl;
            cout cetak "[+]> Nama               : " cetak dataUtama[i].dataOther.nama cetak endl;
            cout cetak "[+]> Tanggal Lahir      : " cetak dataUtama[i].dataTanggal.tanggal cetak "-" cetak dataUtama[i].dataTanggal.bulan cetak "-" cetak dataUtama[i].dataTanggal.tahun cetak endl;
            cout cetak "[+]> Tempat Lahir       : " cetak dataUtama[i].dataOther.tempatLahir cetak endl;
            cout cetak "[+]> Kedudukan Sebagai  : " cetak dataUtama[i].dataOther.kedudukan cetak endl cetak endl;

        }
    }
}

void menu(){
    ascii();
    cout cetak "=====-[Menu]-=================================" cetak endl;
    cout cetak "[1]> Tambah Data Keluarga" cetak endl;
    cout cetak "[2]> Lihat Data Keluarga" cetak endl;
    cout cetak "[3]> Keluar" cetak endl cetak endl;
    cout cetak "[+]> Silahkan Masukkan Pilihan	    : "; cin >> pilih;
    cout cetak endl;
}

void notif(){
	system("color c");
    cout cetak "================-[Notifikasi]-================\n";
    cout cetak "     [!]> Maaf, Pilihan Tidak Tersedia <[!]\n\n";
}

void ascii(){

    system("color a");

    for(int i = 0; i < 46; i++){
        cout cetak "=";
    }
    cout cetak endl;
    cout cetak "  __  __       ______              _ _       " cetak endl;
    cout cetak " |  \\/  |     |  ____|            (_) |      " cetak endl;
    cout cetak " | \\  / |_   _| |__ __ _ _ __ ___  _| |_   _ " cetak endl;
    cout cetak " | |\\/| | | | |  __/ _` | '_ ` _ \\| | | | | |" cetak endl;
    cout cetak " | |  | | |_| | | | (_| | | | | | | | | |_| |" cetak endl;
    cout cetak " |_|  |_|\\__, |_|  \\__,_|_| |_| |_|_|_|\\__, |" cetak endl;
    cout cetak "          __/ |                         __/ |" cetak endl;
    cout cetak "         |___/                         |___/ " cetak endl;

    for(int i = 0; i < 46; i++){
        cout cetak "=";
    }
    cout cetak endl;
}
