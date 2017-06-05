#include <iostream>
using namespace std;
long rekursifFaktorial(int f) {
	if (f==0)
		return 1;
	else
		return f*rekursifFaktorial (f-1); 
}
int main() {
	int x;
	int n=4;
	cout<<n<<"!="<< rekursifFaktorial(n) << endl;

	n=9;
	cout<< n <<"!="<< rekursifFaktorial(n) << endl;
	cout<< "Masukan Angka ";
	cin >> x;
	cout<< x << "!="<< rekursifFaktorial(x) << endl;
	return 0;
}