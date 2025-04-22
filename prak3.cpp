
#include <iostream>
using namespace std;

int main() {
    string nama;
	int jarak, ongkir, total, pil, harga, makanan;
    	do {  
    cout << "\n========== RUMAH MAKAN ==========\n";
    cout << "1. ayam Geprek Rp21.000 " << endl;
    cout << "2. ayam goreng Rp17.000 " << endl;
    cout << "3. Udang goreng Rp19.000" << endl;
    cout << "4. Cumi goreng Rp20.000" << endl;
    cout << "5. ayam bakar Rp25.000" << endl;
    cout << "-------------------------------------\n";
     cout <<"Masukkan pilihan anda : ";
     cin>>pil;
     
 switch (pil){
 	case 1 :
 		nama = "ayam geprek";
		makanan = 21000;
		break;
	case 2 :
 		nama = "ayam goreng";
		makanan = 17000;
		break;
	case 3 :
 		nama = "Udang goreng";
		makanan = 19000;
		break;
	case 4 :
 		nama = "cumi goreng";
		makanan = 20000;
		break;
	case 5 :
 		nama = "ayam bakar";
		makanan = 25000;
		break;
	default :
 		cout<< "Data tidak valid";
		break;
 }
 
 if (pil<6 && pil >0) 
 cout<< "Masukkan jarak anda: ";
 cin >> jarak;
	
if (jarak<3) {
 	ongkir = 15000;
 	total = makanan+ongkir;
 } else if (jarak>=3) {
 		ongkir =25000;
 		total = makanan+ongkir;
	 }else{
	 	cout <<"Tidak ada ongkir"<<endl;
 }
  
	cout << "\n========== STRUK PEMBELIAN ==========\n";
    cout << "Pesanan          : " << pil <<endl;
    cout << "Junlah pesanan   : " << endl;
    cout << "Jarak            : " << endl;
    cout << "-------------------------------------\n";
    cout << "Total Akhir         : Rp " << total << endl;
    cout << "=====================================\n";
    cout << "Terima kasih telah berbelanja!\n";

}
	return 0;
}


