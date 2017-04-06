#include <iostream>
using namespace std;

//prototype
void prosesbaca ();
void prosestukar ();
void prosestampil ();

//variabel global
	int a,b, temp;
	
//program utama
int main () {
	prosesbaca ();
	prosestukar ();
	prosestampil ();
	return 0;
	}
	
//prosesbaca
void prosesbaca() {
	cout << "masukan nilai a :  ";
	cin >> a;
	cout << "masukan nilai b :   ";
	cin >> b;
	}
	
//prosestukar
void prosestukar () {
	temp = b;
	b = a;
	a = temp;
	}
	
//prosestampil
void prosestampil () {
	cout << "=========================================" << endl;
	cout << "nilai a sekarang :   " << a << endl;
	cout << "nilai b sekarang  :  " << b;
	
	return;
	}