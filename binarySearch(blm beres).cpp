#include <iostream>
using namespace std;

int main (){
	int a [8],k, j =8, i =1, x;

for (int l=1; l < 9; l++){
	a[l]=l;
}
cout <<"masukan data yang dicari : ";
cin >> x;
k = (i + j) / 2;
if (k == x){
	cout << "  data ditemukan ";
	k++;
}else if (k != x){
	cout <<"data tidak ditemukan";
}
return 0;
}