#include <iostream>
using namespace std;

int main() {
    string nama;
    int ayamGoreng, ayamBakar;
    const int hargaGoreng = 17000;
    const int hargaBakar = 21000;
    const double diskon = 0.10;
    const int batasDiskon = 45000;
    double total, totalAkhir;
    char tambah;

    cout << "===== Program Kedai Ayam =====\n";
    cout << "Masukkan nama pelanggan     : ";
    getline(cin, nama);
    cout << "Masukkan jumlah ayam goreng : ";
    cin >> ayamGoreng;
    cout << "Masukkan jumlah ayam bakar  : ";
    cin >> ayamBakar;

    do {
        total = (ayamGoreng * hargaGoreng) + (ayamBakar * hargaBakar);

        cout << "\nApakah Anda ingin menambah pesanan? (y/n): ";
        cin >> tambah;

        if (tambah == 'y' || tambah == 'Y') {
            int tambahGoreng, tambahBakar;
            cout << "Masukkan tambahan ayam goreng : ";
            cin >> tambahGoreng;
            cout << "Masukkan tambahan ayam bakar  : ";
            cin >> tambahBakar;

            ayamGoreng += tambahGoreng;
            ayamBakar += tambahBakar;
        }

    } while (tambah == 'y' || tambah == 'Y');

    total = (ayamGoreng * hargaGoreng) + (ayamBakar * hargaBakar);
    totalAkhir = (total > batasDiskon) ? total - (total * diskon) : total;

    cout << "\n========== STRUK PEMBELIAN ==========\n";
    cout << "Nama Pelanggan   : " << nama << endl;
    cout << "Ayam Goreng      : " << ayamGoreng << " x Rp " << hargaGoreng << endl;
    cout << "Ayam Bakar       : " << ayamBakar  << " x Rp " << hargaBakar << endl;
    cout << "-------------------------------------\n";
    cout << "Total Sebelum Diskon : Rp " << total << endl;

    if (total > batasDiskon) {
        cout << "Diskon 10%          : -Rp " << total * diskon << endl;
    }

    cout << "Total Akhir         : Rp " << totalAkhir << endl;
    cout << "=====================================\n";
    cout << "Terima kasih telah berbelanja!\n";

    return 0;
}

