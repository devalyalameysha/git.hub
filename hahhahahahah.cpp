#include <iostream>
using namespace std;

int main(){
	int n;
	int i =1;
	int total = 0;
	
	cout<<"masukkan nilai N :"; cin >> n;
	
	while(i<= n){
		total += i;
		i++;
	}
	cout<< " jumlah dari 1 sampai "<< n << "adalah" << total <<endl;
	
	return 0;
}
