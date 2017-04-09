#include <iostream>
using namespace std;
int perbandingan1 (int a, int b) ;
int perbandingan2 (int a, int b) ;

//prototype
void pilihanA ();
void pilihanB ();

//varibel
int a,b;
//program utama
int main () {
	bool  pilih;
cout << "masukan nilai a :" ;
	cin >>a;
	cout << "masukan nilai b :";
	cin >> b;
	cout <<"============================" <<endl;
	cout <<" masukan a/b : ";
	cin >>pilih;
	if (pilih= a) {
	pilihanA ();
	}
	if (pilih= b) {
		pilihanB ();
	}
return 0;
}

int perbandingan1 (int a,int b) {
return min  (a,b);
}

int perbandingan2 (int a, int b) {
	return max (a,b);
}

//pil a
void pilihanA () {
	cout <<" nilai minimumnya : " <<perbandingan1 (a,b) <<endl;
	cout <<"=============================" <<endl;
}

//pil b
void pilihanB () {
	cout <<" nilai maksimumnya : " <<perbandingan2 (a,b);
}


