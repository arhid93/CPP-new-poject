#include <iostream>
using namespace std;

int main () {

	int a[3][3];
	int a1[3][3];
	int a2[3][3];
	
for(int i=0; i < 3; i++){
	for(int j=0; j < 3; j++){
		cout << "A1 : Masukkan Baris ke-" << i <<" Kolom ke-" << j << " = ";
		cin >> a1[i][j];
		cout << "A2 : Masukkan Baris ke-" << i <<" Kolom ke-" << j << " = ";
		cin >> a2[i][j];
		a[i][j] = a1[i][j] + a2[i][j];
	}
}	

	cout << "_________________________________________________" << endl;
	cout << "A1	" << endl;
	cout << "____________" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << a1[i][j] << " ";

		}
		cout << endl;
	}
	
	cout << endl << endl;
	cout << "A2	" << endl;
	cout << "____________" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << a2[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "A	" << endl;
	cout << "____________" << endl;

	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	
}