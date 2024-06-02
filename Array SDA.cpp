#include <iostream>
using namespace std;


	
void array (int n){
	
	int A[n];
	
	for (int i = 0 ; i < n; i++){
		cout << "\t\t\tMasukkan Nilai Indeks [" << i << "] : ";
		cin >> A[i];
	}

	cout << "\n\t\t\t   Menampilkan Array\n";
	cout << "\t\t\t\t   ";
		for (int i = 0 ; i < n; i++){
		cout << A[i];	
	}

}


int main (){
	
	int n;
	int A[n];
	
	cout << "==================== Program Menampilkan Data Dalam Array ====================";
	cout << "\n\n\t\t\tMasukkan Jumlah Data      : ";
	cin >> n;

	array(n);
	
	
}