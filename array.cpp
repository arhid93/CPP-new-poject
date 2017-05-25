#include <iostream>
	
	using namespace std;
	
	//prototype
	void input () ;
	void pilihanA () ;
	void pilihanB () ;
	
	//variabel global
	int angka,jumlah,max,min,pilihan;
	
	main () {
		cout <<"masuka angka :";
		cin >>angka;
	
	while (pilihan !=3) {
		cout << "==================\n";
		cout << "MENU\n";
		cout << " 1.Cari sebuah Nilai Terkecil\n";
		cout << " 2.Cari sebuah Nilai Terbesar\n";
		cout << " 3.Keluar\n";
		cout << "==================\n";
		cout << "Pilihan anda :";
		cin >>pilihan;
		
	if (pilihan == 1) {
		pilihanA () ;
		
	} else if (pilihan == 2) {
		pilihanB () ;
	}
	
	}
	}
	
	void pilihanA () {
		int angka,jumlah,max,min;
		
		cout << "1.Mencari Nilai Terkecil. (jumlah angka ditentukan)" << endl;
		cout << endl;
		
		for (int i = 1; i <=jumlah; i++) {
		
		cout << "Masukkan Angka :"; cin >>angka;
		
		if (i==1) {
			jumlah;
		   min = angka;
		   max = angka;
		   }
		   else if (min > angka) {
		   min = angka;
		   }
		  }
		 
		 cout << endl;
		 cout << "Nilai Terkecil :" << min << endl;
		   cout << "jumlah :" <<jumlah << endl;
		   
		}
		
	void pilihanB () {
			int angka,jumlah,max,min;
		cout << "2.Mencari Nilai Terbesar. (jumlah angka ditentukan)" << endl;
		cout << endl;
		cout << "Masukkan jumlah angka :" ; cin >> jumlah;
		cout << endl;
		
		for (int i=1;i <= jumlah; i++) {
		
		cout << "Masukkan Angka :"; cin >> angka;
		
		
		if (i==1) {
						jumlah;
			min = angka;
			max = angka;
			}
			else if (max < angka) {
				max = angka;
			}
		  }
		  
		cout << endl;
		cout << "Nilai Terbesar :" << max << endl;
		cout << "jumlah :" <<jumlah << endl;
	}

