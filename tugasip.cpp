#include <iostream>
using namespace std;

bool iswithinrange (float ip, int max, int min);
void cetak ();

float ip, rataip;
int jmlmhs, mhsllus, mhstdkllus;
bool valid;

int main() {
	do {
		cout <<"masukan nilai : " ;
		cin >> ip ;
		valid = iswithinrange(ip,4,0);
	if (valid) {
		if (ip >=2.75) {
		mhsllus++;
	}else{
		mhstdkllus++;
	}
	rataip = rataip + ip;
	jmlmhs++;
	}else{
		cout << "===========================================" << endl;
		cout << "tidak ada data" << endl;
	}
}
while (ip != -999);
cetak();
}
bool iswithinrange (float ip, int max,int min) {
	if (ip > max || ip <= 0) {
		return false;
	}
	return true;
}
void cetak () {
	cout << "==============================================" <<endl;
	cout <<"banyaknya mahasiswa : " << jmlmhs << endl;
	cout <<"banyaknya jumlah lulus : " << mhsllus << endl;
	cout <<"banyaknya yang tidak lulus : " << mhstdkllus << endl;
	cout <<"rata-rata nilai IP : " << (rataip/jmlmhs) << endl;
	
}