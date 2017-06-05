#include <iostream>
using namespace std;
void numberFunction(int i){
	cout <<"nomor :" <<i <<endl;
	i++; //penghenti
	if (i<10){
		numberFunction(i);
	}
}
int main(){
	int i=0;
	numberFunction(i);
	return 0;
}