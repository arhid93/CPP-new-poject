 #include <iostream>
using namespace std;

void luas(int &ls, int a, int t)
{ ls = 0.5*a*t;}

main(){
 int al,tg,hsl;
      cout<<"Alas    = ";cin>>al;
      cout<<"Tinggi = ";cin>>tg;
          luas(hsl,al,tg);
      cout<<"Luas Segitiga = "<<hsl;
return 0;
}