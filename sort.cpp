#include <iostream>
using namespace std;

int main (){
	int a [100],i, k, temp;

for (int l=0; l < 100; l++){
	a[l]=l;
}
for (int i =-1; i < 98; i++){
		for (k = 100; k > i +1; --k){
				if (a[k] > a[k -1]){
					temp = a[k];
					a[k] = a[k-1];
					a[k-1] = temp;
				}

			}
		}
		for (i =0; i< 100; i++){
			cout << a[i] <<endl;
		}
		return 0;
	}