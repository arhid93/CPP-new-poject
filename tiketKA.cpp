#include <iostream>
using namespace std;

typedef struct {
	string nama;
	string alamat;
	string noHP;
}customer;

typedef struct {
	string kels;
}kereta;

typedef struct {
	string kotaAsal;
	string kotTujuan;
}kota;

typedef struct {
	string hari;
	string bulan;
	string tahun;
}tanggal;

typedef struct {
	int jam;
	int menit;
}waktu;

typedef struct {
	string noTiket;
	string noKA;
	string namaKA;
	customer pesan;
	kota stasiun;
	tanggal tanggalBerangkat;
	waktu waktuBerangkat;
	tanggal tanggalTiba;
	waktu waktuTiba;
	kereta kelasnya;
}jadwalKA;

void dataCustomer ();
void rincian ();
void kelas ();

jadwalKA jadwal;

int asal, tujuan, biaya, kel;

void dataCustomer () {
	cout << "____________________________________________________________"<<endl;
	cout <<"                   PESAN TIKET KERETA" <<endl;
	cout <<"____________________________________________________________"<<endl;
	cout <<"                  Tulis Data Diri Anda"<<endl;
	cout <<"Nama         : "; cin >> jadwal.pesan.nama;
	cout <<"Alamat       : "; cin >> jadwal.pesan.alamat;
	cout <<"No Handphone : "; cin >> jadwal.pesan.noHP;
	cout <<"____________________________________________________________"<<endl;
}


void kelas (){
	int perjalanan;
	cout <<"                   Pilih Kota Asal Anda "<< endl;
	cout <<"____________________________________________________________"<<endl;
	cout <<"1. Bandung"<<endl;
	cout <<"2. Jakarta"<< endl;
	cout <<"3. Malang "<<endl;
	cout <<"Pilih :"; cin >>asal;
	//asal
		if (asal== 1){
			jadwal.stasiun.kotaAsal ="Bandung";
		}
		if (asal== 2){
			jadwal.stasiun.kotaAsal="Jakarta";
		}
		if (asal== 3){
			jadwal.stasiun.kotaAsal="Malang";
		}
	cout <<"____________________________________________________________"<<endl;
	cout <<"                  Pilih Kota Tujuan Anda "<<endl;
	cout <<"____________________________________________________________"<<endl;
	cout<<"1. Jogjakarta"<<endl;
	cout<<"2. Cirebon"<<endl;
	cout<<"3. Surabaya"<<endl;
	cout <<"Pilih :"; cin >>tujuan;
	//tujuan
		if (tujuan== 1){
			jadwal.stasiun.kotTujuan= "Jogjakarta";
		}
		if (tujuan== 2){
			jadwal.stasiun.kotTujuan= "Cirebon";
		}
		if (tujuan== 3){
			jadwal.stasiun.kotTujuan= "Surabaya";

		}
	//perjalanan
		if(asal==1 && tujuan==1){
			perjalanan= 1;
			jadwal.noTiket= "KA-0211";
			jadwal.noKA= "PAR-001";
			jadwal.namaKA= "Parahyangan Expres";
		}
		if (asal==1 && tujuan==2){
			perjalanan=2;
			jadwal.noTiket= "KA-0212";
			jadwal.noKA= "PAR-002";
			jadwal.namaKA= "Parahyangan Expres";
		}
		if (asal==1 && tujuan==3){
			perjalanan=3;
			jadwal.noTiket= "KA-0213";
			jadwal.noKA= "PAR-003";
			jadwal.namaKA= "Parahyangan Expres";
		}
		if (asal==2 && tujuan==1){
			perjalanan=4;
			jadwal.noTiket= "KA-0214";
			jadwal.noKA= "JAK-001";
			jadwal.namaKA= "Jakarta Expres";
		}
		if (asal==2 && tujuan==2){
			perjalanan=5;
			jadwal.noTiket= "KA-0215";
			jadwal.noKA= "JAK-002";
			jadwal.namaKA= "Jakarta Expres";
		}
		if (asal==2 && tujuan==3){
			perjalanan=6;
			jadwal.noTiket= "KA-0216";
			jadwal.noKA= "JAK-003";
			jadwal.namaKA= "Jakarta Expres";
		}
		if (asal==3 && tujuan==1){
			perjalanan=7;
			jadwal.noTiket= "KA-0217";
			jadwal.noKA= "MAL-001";
			jadwal.namaKA= "Malang Expres";
		}
		if (asal==3 && tujuan==2){
			perjalanan=8;
			jadwal.noTiket= "KA-0218";
			jadwal.noKA= "MAL-002";
			jadwal.namaKA= "Malang Expres";
		}
		if (asal==3 && tujuan==3){
			perjalanan=9;
			jadwal.noTiket= "KA-0219";
			jadwal.noKA= "MAL-003";
			jadwal.namaKA= "Malang Expres";
		}


		cout<<"____________________________________________________________"<<endl;

cout <<"            Pilih Kelas Kereta"<<endl;
cout <<"____________________________________________________________"<<endl;
cout <<"1. Kelas Ekonomi"<<endl;
cout <<"2. Kelas Eksekutif"<<endl;
cout <<"Pilih :"; cin >> kel;
//kelas
	if (kel==1){
		jadwal.kelasnya.kels= "Ekonomi";
	}
	if (kel==2){
		jadwal.kelasnya.kels= "Eksekutif";
	}
//biaya
		if (perjalanan== 1 && kel==1){
			biaya=56000;
		}else if (perjalanan==2 && kel==1){
			biaya=67000;
		}else if (perjalanan==3 && kel==1){
			biaya=78000;
		}else if (perjalanan==4 && kel==1){
			biaya=87000;
		}else if (perjalanan==5 && kel==1){
			biaya=98000;
		}else if (perjalanan==6 && kel==1){
			biaya=108000;
		}else if (perjalanan==7 && kel==1){
			biaya=118000;
		}else if (perjalanan==8 && kel==1){
			biaya=127000;
		}else if (perjalanan==9 && kel==1){
			biaya=132000;
		}else if (perjalanan==1 && kel==2){
			biaya=152000;
		}else if (perjalanan==2 && kel==2){
			biaya=157000;
		}else if (perjalanan==3 && kel==2){
			biaya=162000;
		}else if (perjalanan==4 && kel==2){
			biaya=168000;
		}else if (perjalanan==5 && kel==2){
			biaya=172000;
		}else if (perjalanan==6 && kel==2){
			biaya=178000;
		}else if (perjalanan==7 && kel==2){
			biaya=182000;
		}else if (perjalanan==8 && kel==2){
			biaya=186000;
		}else if (perjalanan==9 && kel==2){
			biaya=192000;
		}
cout <<"____________________________________________________________"<<endl;
}

void rincian(){
cout <<"           Tanggal Dan Waktu Berangkat"<<endl;
cout <<"____________________________________________________________"<<endl;
		cout<<"Hari/ tanggal  : "; cin >> jadwal.tanggalBerangkat.hari;
		cout<<"Bulan          : "; cin >> jadwal.tanggalBerangkat.bulan;
		cout<<"Tahun          : "; cin >> jadwal.tanggalBerangkat.tahun;
		cout<<"jam            : "; cin >>jadwal.waktuBerangkat.jam;
		cout<<"Menit          : "; cin >>jadwal.waktuBerangkat.menit;
cout <<"____________________________________________________________"<<endl;
cout <<"           Tanggal Dan Waktu Tiba"<<endl;
cout <<"____________________________________________________________"<<endl;
		cout<<"Hari/ tanggal  : "; cin >> jadwal.tanggalTiba.hari;
		cout<<"Bulan          : "; cin >> jadwal.tanggalTiba.bulan;
		cout<<"Tahun          : "; cin >> jadwal.tanggalTiba.tahun;
		cout<<"jam            : "; cin >>jadwal.waktuTiba.jam;
		cout<<"Menit          : "; cin >>jadwal.waktuTiba.menit;
}
int main (){
	dataCustomer();
	kelas ();
	rincian();
cout <<"____________________________________________________________"<<endl;
cout <<"                     RINCIAN PESANAN TIKET"<<endl;
cout <<"____________________________________________________________"<<endl;
cout <<"No. Tiket                 : " << jadwal.noTiket<<endl;
cout <<"No. Kereta                : " << jadwal.noKA<<endl;
cout <<"Nama Kereta               : " << jadwal.namaKA<<endl;
cout <<"------------------------------------------------------------"<<endl;
cout <<"Nama Customer             : " << jadwal.pesan.nama<<endl;
cout <<"Alamat                    : " << jadwal.pesan.alamat<<endl;
cout <<"No Handphone              : " << jadwal.pesan.noHP<<endl;
cout <<"Tanggal Keberangkatan     : " << jadwal.tanggalBerangkat.hari<<"-"<<jadwal.tanggalBerangkat.bulan<<"-"<<jadwal.tanggalBerangkat.tahun<<endl;
cout <<"Kota/ Waktu Keberangkatan : " << jadwal.stasiun.kotaAsal<<"/ " << jadwal.waktuBerangkat.jam<<":"<<jadwal.waktuBerangkat.menit<<endl;
cout <<"Tanggal Tiba              : " << jadwal.tanggalTiba.hari<<"-"<<jadwal.tanggalTiba.bulan<<"-"<<jadwal.tanggalTiba.tahun<<endl;
cout <<"Kota Tujuan/ Waktu Tiba   : " << jadwal.stasiun.kotTujuan<<"/ " << jadwal.waktuTiba.jam<<":"<<jadwal.waktuTiba.menit<<endl;
cout <<"Kelas Kereta              : " << jadwal.kelasnya.kels<<endl;
cout <<"biaya                     : Rp." << biaya<<endl;

return 0;
}