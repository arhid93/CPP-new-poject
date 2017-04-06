#include <iostream>
using namespace std;

bool iswithinrange (float nilai, int max, int min);
void prosescetak ();

float nilai_ip,nilai_ratarata;
int jumlah_mahasiswa, jumlah_lulus, jumlah_tidaklulus;
bool valid;

int main() {
	do {
		cout <<"masukan nilai : " ;
		cin >> nilai_ip ;
		valid = iswithinrange(nilai_ip,4,0);
	if (valid) {
		if (nilai_ip >=2.75) {
		jumlah_lulus++;
	}else{
		jumlah_tidaklulus++;
	}
	nilai_ratarata = nilai_ratarata + nilai_ip;
	jumlah_mahasiswa++;
	}else{
		cout << "tidak ada data" << endl;
	}
}
while (nilai_ip != -999);
prosescetak();
}
bool iswithinrange (float nilai, int max,int min) {
	if (nilai > max || nilai <= 0) {
		return false;
	}
	return true;
}
void prosescetak () {
	cout <<"banyaknya mahasiswa : " << jumlah_mahasiswa << endl;
	cout <<"banyaknya jumlah lulus : " << jumlah_lulus << endl;
	cout <<"banyaknya yang tidak lulus : " << jumlah_tidaklulus << endl;
	cout <<"rata-rata nilai IP : " << (nilai_ratarata/jumlah_mahasiswa) << endl;
}