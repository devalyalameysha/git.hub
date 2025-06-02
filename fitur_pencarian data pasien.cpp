#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Pasien {
private:
    string id, nama, umur, telepon, penyakit, alamat;

public:
    void inputData() {
        cout << "Masukkan ID Pasien         : "; getline(cin, id);
        cout << "Masukkan Nama Pasien       : "; getline(cin, nama);
        cout << "Masukkan Umur              : "; getline(cin, umur);
        cout << "Masukkan No. Telepon       : "; getline(cin, telepon);
        cout << "Masukkan Keluhan/Penyakit  : "; getline(cin, penyakit);
        cout << "Masukkan Alamat            : "; getline(cin, alamat);
    }

    void tampilData(int no) const {
        cout << left << setw(5) << no
             << setw(10) << id
             << setw(15) << nama
             << setw(6) << umur
             << setw(12) << telepon
             << setw(15) << penyakit
             << setw(15) << alamat << endl;
    }
};

class ManajemenPasien {
private:
    Pasien daftarPasien[100]; 
    int jumlahPasien = 0;

public:
    void inputPasien() {
        char ulang;
        do {
            if (jumlahPasien >= 100) {
                cout << "Kapasitas maksimum pasien tercapai!\n";
                break;
            }

            system("cls");
            cout << "=== INPUT DATA PASIEN ===" << endl;
            daftarPasien[jumlahPasien].inputData();
            jumlahPasien++;

            cout << "\nInput data pasien lagi? (Y/N): ";
            cin >> ulang;
            cin.ignore(); 
        } while (ulang == 'Y' || ulang == 'y');
    }

    void tampilkanDaftarPasien() {
        system("cls");
        cout << "========================== LIST DATA PASIEN ==========================" << endl;

        if (jumlahPasien == 0) {
            cout << "Belum ada data pasien.\n";
        } else {
            cout << left << setw(5) << "No"
                 << setw(10) << "ID"
                 << setw(15) << "Nama Pasien"
                 << setw(6) << "Umur"
                 << setw(12) << "Telpon"
                 << setw(15) << "Penyakit"
                 << setw(15) << "Alamat" << endl;
            cout << string(70, '=') << endl;

            for (int i = 0; i < jumlahPasien; ++i) {
                daftarPasien[i].tampilData(i + 1);
            }
        }

        cout << "\nTekan ENTER untuk kembali ke menu...";
        cin.get(); 
    }
};

int main() {
    ManajemenPasien mp;
    int pilihan;

    do {
        system("cls");
        cout << "=== MENU DATA PASIEN ===" << endl;
        cout << "1. Input Data Pasien" << endl;
        cout << "2. List Data Pasien" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan Pilihan Anda : ";
        cin >> pilihan;
        cin.ignore(); 

        switch (pilihan) {
            case 1:
                mp.inputPasien();
                break;
            case 2:
                mp.tampilkanDaftarPasien();
                break;
            case 3:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                cin.get(); 
        }
    } while (pilihan != 3);

    return 0;
}

