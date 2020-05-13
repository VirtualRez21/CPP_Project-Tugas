#include<iostream>
#define cetak <<
using namespace std;

char keyListLower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char keyListUpper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int banyakTambah = 0;
int pilih;

void input();
void output();
void bubbleSortAscending();
void bubbleSortDescending();
void sequentialSearch();
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
        }

        else if(pilih == 2) {
            output();
        }
        else if(pilih == 3){
            sequentialSearch();
        }
        else if(pilih == 4) {
            break;
        }
        else{
            notif();
        }
    }

}

void input(){

	system("color b");

    char keyListNumber[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    cout cetak "=====-[Menu Tambah Data]-======================" cetak endl;
    cout cetak "[+]> Masukkan Nama Baru             : "; cin >> dataUtama[banyakTambah].dataOther.nama;
    cout cetak "[+]> Masukkan Tanggal Lahir         : "; cin >> dataUtama[banyakTambah].dataTanggal.tanggal;
    cout cetak "[+]> Masukkan Bulan Lahir           : "; cin >> dataUtama[banyakTambah].dataTanggal.bulan;
    cout cetak "[+]> Masukkan Tahun Lahir           : "; cin >> dataUtama[banyakTambah].dataTanggal.tahun;
    cout cetak "[+]> Masukkan Tempat Lahir          : "; cin >> dataUtama[banyakTambah].dataOther.tempatLahir;
    cout cetak "[+]> Kedudukan Dikeluarga Sebagai   : "; cin >> dataUtama[banyakTambah].dataOther.kedudukan;
    cout cetak endl;

    for(int i = 0; i < 26; i++){
        if(dataUtama[banyakTambah].dataOther.nama[0] == keyListLower[i]){
            dataUtama[banyakTambah].dataOther.nama[0] = dataUtama[banyakTambah].dataOther.nama[0] - 32;
        }
        else if(dataUtama[banyakTambah].dataOther.nama[0] == keyListUpper[i]){
            continue;
        }
    }

    for(int i = 0; i < 26; i++){
        if(dataUtama[banyakTambah].dataTanggal.bulan[0] == keyListLower[i]){
            dataUtama[banyakTambah].dataTanggal.bulan[0] = dataUtama[banyakTambah].dataTanggal.bulan[0] - 32;
        }
        else if(dataUtama[banyakTambah].dataTanggal.bulan[0] == keyListNumber[i]){
            continue;
        }
    }

    for(int i = 0; i < 26; i++){
        if(dataUtama[banyakTambah].dataOther.tempatLahir[0] == keyListLower[i]){
            dataUtama[banyakTambah].dataOther.tempatLahir[0] = dataUtama[banyakTambah].dataOther.tempatLahir[0] - 32;
        }
        else if(dataUtama[banyakTambah].dataOther.tempatLahir[0] == keyListUpper[i]){
            continue;
        }
    }

    for(int i = 0; i < 26; i++){
        if(dataUtama[banyakTambah].dataOther.kedudukan[0] == keyListLower[i]){
            dataUtama[banyakTambah].dataOther.kedudukan[0] = dataUtama[banyakTambah].dataOther.kedudukan[0] - 32;
        }
        else if(dataUtama[banyakTambah].dataOther.kedudukan[0] == keyListUpper[i]){
            continue;
        }
    }

    banyakTambah += 1;

    system("pause");
    system("cls");
}

void bubbleSortAscending(){

    string saveNama, saveBulan, saveTempat, saveSebagai;
    int saveTanggal, saveTahun;

    if(banyakTambah == 1){
        cout cetak endl;
    }

    else if(banyakTambah > 1){
        for(int i = 0; i < banyakTambah; i++){
            for(int j = 0; j < (banyakTambah - i - 1); j++){
                if(dataUtama[j].dataOther.nama > dataUtama[j+1].dataOther.nama){

                    saveNama = dataUtama[j].dataOther.nama;

                    dataUtama[j].dataOther.nama = dataUtama[j+1].dataOther.nama;
                    dataUtama[j+1].dataOther.nama = saveNama;

                    saveTanggal = dataUtama[j].dataTanggal.tanggal;
                    dataUtama[j].dataTanggal.tanggal = dataUtama[j+1].dataTanggal.tanggal;
                    dataUtama[j+1].dataTanggal.tanggal = saveTanggal;

                    saveBulan = dataUtama[j].dataTanggal.bulan;
                    dataUtama[j].dataTanggal.bulan = dataUtama[j+1].dataTanggal.bulan;
                    dataUtama[j+1].dataTanggal.bulan = saveBulan;

                    saveTahun = dataUtama[j].dataTanggal.tahun;
                    dataUtama[j].dataTanggal.tahun = dataUtama[j+1].dataTanggal.tahun;
                    dataUtama[j+1].dataTanggal.tahun = saveTahun;

                    saveTempat = dataUtama[j].dataOther.tempatLahir;
                    dataUtama[j].dataOther.tempatLahir = dataUtama[j+1].dataOther.tempatLahir;
                    dataUtama[j+1].dataOther.tempatLahir = saveTempat;

                    saveSebagai = dataUtama[j].dataOther.kedudukan;
                    dataUtama[j].dataOther.kedudukan = dataUtama[j+1].dataOther.kedudukan;
                    dataUtama[j+1].dataOther.kedudukan = saveSebagai;
                }
            }
        }
    }
}

void bubbleSortDescending(){

    string saveNama, saveBulan, saveTempat, saveSebagai;
    int saveTanggal, saveTahun;

    if(banyakTambah == 1){
        cout cetak endl;
    }

    else if(banyakTambah > 1){
        for(int i = 0; i < banyakTambah; i++){
            for(int j = 0; j < (banyakTambah - i - 1); j++){
                if(dataUtama[j].dataOther.nama < dataUtama[j+1].dataOther.nama){

                    saveNama = dataUtama[j].dataOther.nama;

                    dataUtama[j].dataOther.nama = dataUtama[j+1].dataOther.nama;
                    dataUtama[j+1].dataOther.nama = saveNama;

                    saveTanggal = dataUtama[j].dataTanggal.tanggal;
                    dataUtama[j].dataTanggal.tanggal = dataUtama[j+1].dataTanggal.tanggal;
                    dataUtama[j+1].dataTanggal.tanggal = saveTanggal;

                    saveBulan = dataUtama[j].dataTanggal.bulan;
                    dataUtama[j].dataTanggal.bulan = dataUtama[j+1].dataTanggal.bulan;
                    dataUtama[j+1].dataTanggal.bulan = saveBulan;

                    saveTahun = dataUtama[j].dataTanggal.tahun;
                    dataUtama[j].dataTanggal.tahun = dataUtama[j+1].dataTanggal.tahun;
                    dataUtama[j+1].dataTanggal.tahun = saveTahun;

                    saveTempat = dataUtama[j].dataOther.tempatLahir;
                    dataUtama[j].dataOther.tempatLahir = dataUtama[j+1].dataOther.tempatLahir;
                    dataUtama[j+1].dataOther.tempatLahir = saveTempat;

                    saveSebagai = dataUtama[j].dataOther.kedudukan;
                    dataUtama[j].dataOther.kedudukan = dataUtama[j+1].dataOther.kedudukan;
                    dataUtama[j+1].dataOther.kedudukan = saveSebagai;
                }
            }
        }
    }
}

void sequentialSearch(){
    string cariNama;
    int cariTanggal, pilihanCari;
    int batas = 1;

    if(banyakTambah == 0){
        system("color c");
        cout cetak "================-[Notifikasi]-================\n";
        cout cetak "     [!]> Maaf, Data Belum Tersedia <[!]\n\n";
        system("pause");
        system("cls");
	}
	else{
        cout cetak "=====-[Menu Pilihan Cari Data]-===============" cetak endl;
        cout cetak "[1]> Cari Data Dengan Nama\n[2]> Cari Data Dengan Tanggal Lahir" cetak endl cetak endl;
        cout cetak "[+]> Silahkan Masukkan Pilihan  : "; cin >> pilihanCari;

        if(pilihanCari == 1){
            system("color a");
            cout cetak "\n=====-[Proses Cari Data]-=====================" cetak endl;
            cout cetak "[+]> Cari Nama Anggota Keluarga : "; cin >> cariNama;

            for(int i = 0; i < 26; i++){
                if(cariNama[0] == keyListLower[i]){
                    cariNama[0] = cariNama[0] - 32;
                }
                else if(cariNama[0] == keyListUpper[i]){
                    continue;
                }
            }

            for(int i = 0; i < banyakTambah; i++){
                batas += 1;
                if(dataUtama[i].dataOther.nama == cariNama){
                    system("color e");
                    cout cetak "\n===========-[Hasil Pencarian Data]-===========" cetak endl;
                    cout cetak "[+]> Nama               : " cetak dataUtama[i].dataOther.nama cetak endl;
                    cout cetak "[+]> Tanggal Lahir      : " cetak dataUtama[i].dataTanggal.tanggal cetak "-" cetak dataUtama[i].dataTanggal.bulan cetak "-" cetak dataUtama[i].dataTanggal.tahun cetak endl;
                    cout cetak "[+]> Tempat Lahir       : " cetak dataUtama[i].dataOther.tempatLahir cetak endl;
                    cout cetak "[+]> Kedudukan Sebagai  : " cetak dataUtama[i].dataOther.kedudukan cetak endl cetak endl;
                    batas = batas - batas;
                    system("pause");
        			system("cls");
                    break;
                }
                else if(batas > banyakTambah){
                    system("color c");
                    cout cetak "\n================-[Notifikasi]-================\n";
                    cout cetak "     [!]> Maaf, Data Tidak Ditemukan <[!]\n\n";
                    system("pause");
        			system("cls");
                    break;
                }
            }
        }
        else if(pilihanCari == 2){
            system("color a");
            cout cetak "\n=====-[Proses Cari Data]-=====================" cetak endl;
            cout cetak "[+]> Cari Tanggal Lahir Anggota Keluarga : "; cin >> cariTanggal;

            for(int i = 0; i < banyakTambah; i++){
                batas += 1;
                if(dataUtama[i].dataTanggal.tanggal == cariTanggal){
                    system("color e");
                    cout cetak "\n===========-[Hasil Pencarian Data]-===========" cetak endl;
                    cout cetak "[+]> Nama               : " cetak dataUtama[i].dataOther.nama cetak endl;
                    cout cetak "[+]> Tanggal Lahir      : " cetak dataUtama[i].dataTanggal.tanggal cetak "-" cetak dataUtama[i].dataTanggal.bulan cetak "-" cetak dataUtama[i].dataTanggal.tahun cetak endl;
                    cout cetak "[+]> Tempat Lahir       : " cetak dataUtama[i].dataOther.tempatLahir cetak endl;
                    cout cetak "[+]> Kedudukan Sebagai  : " cetak dataUtama[i].dataOther.kedudukan cetak endl cetak endl;
                    batas = batas - batas;
                    system("pause");
        			system("cls");
                    break;
                }
                else if(batas > banyakTambah){
                    system("color c");
                    cout cetak "\n================-[Notifikasi]-================\n";
                    cout cetak "     [!]> Maaf, Data Tidak Ditemukan <[!]\n\n";
                    system("pause");
        			system("cls");
                    break;
                }
            }
        }
        else{
            notif();
        }
	}
}

void output(){

	int pilihan;

	if(banyakTambah == 0){
	system("color c");
	cout cetak "================-[Notifikasi]-================\n";
	cout cetak "     [!]> Maaf, Data Tidak Tersedia <[!]\n\n";
	}

	else if(banyakTambah == 1){
		system("color e");
        cout cetak "=====-[Menu Lihat Data]-======================" cetak endl;
		cout cetak "=================-[Data Ke-1]-================" cetak endl;
		cout cetak "[+]> Nama               : " cetak dataUtama[0].dataOther.nama cetak endl;
		cout cetak "[+]> Tanggal Lahir      : " cetak dataUtama[0].dataTanggal.tanggal cetak "-" cetak dataUtama[0].dataTanggal.bulan cetak "-" cetak dataUtama[0].dataTanggal.tahun cetak endl;
		cout cetak "[+]> Tempat Lahir       : " cetak dataUtama[0].dataOther.tempatLahir cetak endl;
		cout cetak "[+]> Kedudukan Sebagai  : " cetak dataUtama[0].dataOther.kedudukan cetak endl cetak endl;
	}
	else{
		while(true){
			cout cetak "==============-[Pilihan Sorting]-=============" cetak endl;
			cout cetak "[1]> Ascending\n[2]> Descending" cetak endl cetak endl;

			cout cetak "[+]> Silahkan Masukkan Pilihan : "; cin >> pilihan;

			if(pilihan == 1){
				bubbleSortAscending();

	    		system("color e");
	        	cout cetak "\n=====-[Menu Lihat Data]-======================" cetak endl;
	        	for(int i = 0; i < banyakTambah; i++) {
	            	cout cetak "=================-[Data Ke-" cetak (i+1) cetak "]-================" cetak endl;
	            	cout cetak "[+]> Nama               : " cetak dataUtama[i].dataOther.nama cetak endl;
	            	cout cetak "[+]> Tanggal Lahir      : " cetak dataUtama[i].dataTanggal.tanggal cetak "-" cetak dataUtama[i].dataTanggal.bulan cetak "-" cetak dataUtama[i].dataTanggal.tahun cetak endl;
	            	cout cetak "[+]> Tempat Lahir       : " cetak dataUtama[i].dataOther.tempatLahir cetak endl;
	            	cout cetak "[+]> Kedudukan Sebagai  : " cetak dataUtama[i].dataOther.kedudukan cetak endl cetak endl;

	        	}
	        	break;
			}

			else if(pilihan == 2){
				bubbleSortDescending();

	    		system("color e");
	        	cout cetak "\n=====-[Menu Lihat Data]-======================" cetak endl;
	        	for(int i = 0; i < banyakTambah; i++) {
	            	cout cetak "=================-[Data Ke-" cetak (i+1) cetak "]-================" cetak endl;
	            	cout cetak "[+]> Nama               : " cetak dataUtama[i].dataOther.nama cetak endl;
	            	cout cetak "[+]> Tanggal Lahir      : " cetak dataUtama[i].dataTanggal.tanggal cetak "-" cetak dataUtama[i].dataTanggal.bulan cetak "-" cetak dataUtama[i].dataTanggal.tahun cetak endl;
	            	cout cetak "[+]> Tempat Lahir       : " cetak dataUtama[i].dataOther.tempatLahir cetak endl;
	            	cout cetak "[+]> Kedudukan Sebagai  : " cetak dataUtama[i].dataOther.kedudukan cetak endl cetak endl;

	        	}
	        	break;
			}
			else{
				cout cetak endl;
				system("color c");
    			cout cetak "================-[Notifikasi]-================\n";
    			cout cetak "     [!]> Maaf, Pilihan Tidak Tersedia <[!]\n\n";
    			system("pause");
    			system("cls");
    			ascii();
    			cout cetak "=====-[Menu]-=================================" cetak endl;
    			cout cetak "[1]> Tambah Data Keluarga" cetak endl;
    			cout cetak "[2]> Lihat Data Keluarga" cetak endl;
    			cout cetak "[3]> Keluar" cetak endl cetak endl;
    			cout cetak "[+]> Silahkan Masukkan Pilihan : " cetak pilih cetak endl cetak endl;

			}
		}
	}

    system("pause");
    system("cls");
}

void menu(){
    ascii();
    cout cetak "=====-[Menu]-=================================" cetak endl;
    cout cetak "[1]> Tambah Data Keluarga" cetak endl;
    cout cetak "[2]> Lihat Data Keluarga" cetak endl;
    cout cetak "[3]> Cari Data Keluarga" cetak endl;
    cout cetak "[4]> Keluar" cetak endl cetak endl;
    cout cetak "[+]> Silahkan Masukkan Pilihan : "; cin >> pilih;
    cout cetak endl;
}

void notif(){
	system("color c");
    cout cetak "================-[Notifikasi]-================\n";
    cout cetak "     [!]> Maaf, Pilihan Tidak Tersedia <[!]\n\n";
    system("pause");
    system("cls");
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
