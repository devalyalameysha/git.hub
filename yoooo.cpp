#include <iostream>
using namespace std;

int main(){
	int angka;
	int ulang;
	
	do{
		cout<<" masukkan sebuah angka : "; cin>> angka;
		cout<<" Anda memasukkan angka " << angka << endl;
		
		cout<<" ingin memasukkan angka lagi? (y/n) : "; cin>> ulang;
		
	}while (ulang == 'y' || ulang == 'y');
	cout<<"program selesai. terima kasih " << endl;
	
	return 0;
}
