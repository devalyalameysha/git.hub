
#include <iostream>
using namespace std;

int main() {
    string nama;
    int ayamGoreng, ayamBakar, udangGoreng, cumiGoreng, ayamGeprek;
    const int hargaAyamGoreng = 17000;
    const int hargaAyamBakar = 25000;
    const int hargaAyamGeprek = 21000;
    const int hargaudangGoreng = 19000;
    const int hargaCumiGoreng = 20000;
    const int jarakOngkir = 15000;
    const int batasOngkir= 25000;
    double total, totalAkhir;
    char tambah;

    cout << "===== Program Rumah Makan ====\n";
    cout << "Masukkan nama pelanggan     : ";
    getline(cin, nama);
	cout << "Masukkan jumlah ayam Geprek : ";
    cin >> ayamGeprek;
    cout << "Masukkan jumlah ayam goreng : ";
    cin >> ayamGoreng;
    cout << "Masukkan jumlah Udang goreng : ";
    cin >> udangGoreng;
    cout << "Masukkan jumlah Cumi goreng : ";
    cin >> cumiGoreng;
    cout << "Masukkan jumlah ayam bakar  : ";
    cin >> ayamBakar;

    total = (ayamGoreng * hargaAyamGoreng) + (ayamBakar * hargaAyamBakar) + (ayamGeprek * hargaAyamGeprek) + (udangGoreng * hargaudangGoreng) + (cumiGoreng * hargaCumiGoreng);
    totalAkhir = (total > jarakOngkir) ? total - (total * batasOngkir) : total;

    cout << "\n========== STRUK PEMBELIAN ==========\n";
    cout << "Nama Pelanggan   : " << nama << endl;
    cout << "Ayam Geprek      : " << ayamGeprek << " x Rp " << hargaAyamGeprek << endl;
    cout << "Ayam Goreng       : " << ayamGoreng  << " x Rp " << hargaAyamGoreng << endl;
    cout << "Udang Goreng       : " << udangGoreng  << " x Rp " << hargaudangGoreng << endl;
    cout << "Cumi Goreng       : " << cumiGoreng  << " x Rp " << hargaCumiGoreng << endl;
    cout << "Ayam Bakar       : " << ayamBakar  << " x Rp " << hargaAyamBakar << endl;
    cout << "-------------------------------------\n";
    cout << "Total Akhir         : Rp " << totalAkhir << endl;
    cout << "=====================================\n";
    cout << "Terima kasih telah berbelanja!\n";

    return 0;
}


