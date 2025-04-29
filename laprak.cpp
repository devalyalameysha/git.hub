#include <iostream>
using namespace std;
//fungsi untuk menghitung faktorial secara rekursif
int faktorialRekursif(int n){
	if(n==0||n==1) //base case: jika n 0 atau 1, faktorial adalah 1
		return 1;
		
	else
		return n*faktorialRekursif(n-1); //recursive case: n* faktorial (n-1)
}

int main(){
	int n;
	cout<<"Masukkan bilangan: "; 
	cin>>n;// input bilangan dari user
	cout<<"Faktorial dari "<<n<<" adalah "<<faktorialRekursif(n)<<endl;
	return 0;
}
