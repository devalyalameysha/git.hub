#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah_ktp;
	char ulang_ktp;
        char nik[20];
        string nama;
        string tempat_tgl_lahir;
        string jenis_kelamin;
        string gol_darah;
        string alamat;
        string rt_rw;
        string agama;
        string status_perkawinan;
        string pekerjaan;
        string kewarganegaraan;
        string berlaku_hingga;
do{

        cout << "Masukkan NIK: ";
        cin.getline(nik, 20);
        cout << "Masukkan Nama: ";
        getline(cin, nama);
        cout << "Masukkan Tempat/Tgl Lahir: ";
        getline(cin, tempat_tgl_lahir);
        cout << "Masukkan Jenis Kelamin: ";
        getline(cin, jenis_kelamin);
        cout << "Masukkan Golongan Darah (A/B/AB/O): ";
        cin >> gol_darah;
        cin.ignore();
        cout << "Masukkan Alamat: ";
        getline(cin, alamat);
        cout << "Masukkan RT/RW: ";
        getline(cin, rt_rw);
        cout << "Masukkan Agama: ";
        getline(cin, agama);
        cout << "Masukkan Status Perkawinan: ";
        getline(cin, status_perkawinan);
        cout << "Masukkan Pekerjaan: ";
        getline(cin, pekerjaan);
        cout << "Masukkan Kewarganegaraan: ";
        getline(cin, kewarganegaraan);
        cout << "Masukkan Berlaku Hingga: ";
        getline(cin, berlaku_hingga);
        
	
        cout << "\n============== KTP ===============\n";
        cout << "NIK              : " << nik << endl;
        cout << "Nama             : " << nama << endl;
        cout << "Tempat/Tgl Lahir : " << tempat_tgl_lahir << endl;
        cout << "Jenis Kelamin    : " << jenis_kelamin << endl;
        cout << "Gol Darah        : " << gol_darah << endl;
        cout << "Alamat           : " << alamat << endl;
        cout << "RT/RW            : " << rt_rw << endl;
        cout << "Agama            : " << agama << endl;
        cout << "Status Perkawinan: " << status_perkawinan << endl;
        cout << "Pekerjaan        : " << pekerjaan << endl;
        cout << "Kewarganegaraan  : " << kewarganegaraan << endl;
        cout << "Berlaku Hingga   : " << berlaku_hingga << endl;
        cout << "=====================================\n";
        
         cout << "\nIngin memasukkan data KTP lagi? (y/n): ";
        cin >> ulang_ktp;
        cin.ignore(); 
	system ("cls");

    } while (ulang_ktp == 'y' || ulang_ktp == 'Y');

    cout << "\nProgram selesai. Terima kasih!" << endl;
    return 0;
}
