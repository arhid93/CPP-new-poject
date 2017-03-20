#include <iostream>
using namespace std;

int main () {
	// variabel
	int a, b, temp;
	
	//proses membaca
	cout << "masukkan nilai A : ";
	cin >> a;
	
	cout << "masukkan nilai b : ";
	cin >> b;
	
	//proses tukar
	temp = b;
	b = a;
	a = temp;
	
	//proses tampil
	cout << "============================" << endl;
	cout << "nilai A sekarang : " << a << endl;
	cout << "nilai B sekarang : " << b;
	
	return 0;
	}