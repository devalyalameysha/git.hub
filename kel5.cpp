#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main (){
	char nik[20];
	string nama;
	string tempat_tgl_lahir;
	string jenis_kelamin;
	char gol_darah;
	string alamat;
	string rt_rw;
	string agama;
	string status_perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
	
	cout <<"Masukkan NIK : ";
	cin>>nik;
	cout <<"Masukkan nama : ";
	cin>>nama;
	cout <<"Masukkan tempat/tgl lahir : ";
	cin>>tempat_tgl_lahir;
	cout <<"Masukkan Jenis kelamin : ";
	cin>>jenis_kelamin;
	cout <<"Masukkan  Golongan darah : ";
	cin>>gol_darah;
	cout<<"Masukkan alamat :";
	cin>>alamat;
	cout<<"Masukkan RT/RW : ";
	cin>>rt_rw;
	cout <<"Masukkan Agama : ";
	cin>>agama;
	cout <<"Masukkan Status Perkawinan : ";
	cin>>status_perkawinan;
	cout <<"Masukkan Pekerjaan : ";
	cin>>pekerjaan;
	cout<<" Masukkan Kewarganegaraan";
	cin>>kewarganegaraan;
	cout<<"Masukkan Berlaku Hingga :";
	cin>>berlaku_hingga;
	
	cout<<"===========KARTU TANDA PENDUDUK========="<<endl;
    cout << "NIK" << ": " << nik << endl;
    cout << "Nama" << ": " << nama << endl;
    cout << "Tempat/Tgl Lahir" << ": " << tempat_tgl_lahir << endl;
    cout << "Jenis Kelamin" << ": " <<jenis_kelamin << "    Gol Darah: " <<gol_darah << endl;
    cout << "Alamat" << ": " <<alamat << endl;
    cout << "RT/RW" << ": " <<rt_rw << endl;
    cout << "Agama" << ": " <<agama << endl;
    cout << "Status Perkawinan" << ": " <<status_perkawinan << endl;
    cout << "Pekerjaan" << ": " << pekerjaan << endl;
    cout << "Kewarganegaraan" << ": " <<kewarganegaraan << endl;
    cout << "Berlaku Hingga" << ": " <<berlaku_hingga << endl;
    
    return 0;
}
