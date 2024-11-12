#include <iostream>
using namespace std;
	#deklarasi variabel
	int jumlah_tiket, harga, total_harga;
	long harga_akhir;
	char pilih_tiket, ulangi, konfirmasi;
	string diskon;

#fungsi untuk memilih tiket dan jumlah tiket
void memilih_tiket(){ 
	cout<<"\nSilahkan Pilih Tiket Kereta(A/B/C) : ";
	cin>>pilih_tiket;
	
	if (pilih_tiket == 'A' || pilih_tiket == 'a'){
		harga=150000;		
	}else if(pilih_tiket == 'B' || pilih_tiket == 'b'){
		harga=200000;
	}else if(pilih_tiket == 'C' || pilih_tiket == 'c'){
		harga=250000;
	}else{
		cout<<"***ERROR!!!***\nINPUT TIDAK VALID\nMengulang Program"<<endl;
		return memilih_tiket();
	}
	
	cout<<"Masukkan jumlah tiket : ";
	cin>>jumlah_tiket;
	
	if (jumlah_tiket >= 10){
		cout<<"***ERROR!!!***\nJUMLAH TIKET MELEBIHI BATAS\nMengulang Program"<<endl;
		return memilih_tiket();
	}
}



int main(){
	
	do{ 
		cout<<"===HARGA TIKET KERETA==="<<endl;
		cout<<"| Kereta A | Rp.150.000 |"<<endl;
		cout<<"| Kereta B | Rp.200.000 |"<<endl;
		cout<<"| Kereta C | Rp.250.000 |"<<endl;
		
		#memanggil fungsi yang sudah dibuat sebelumnya
		memilih_tiket(); 	
		
		cout<<"\n___Rincian Pesanan___"<<endl;
		cout<<"Harga per tiket: Rp."<<harga<<endl;
		cout<<"Jumlah tiket : "<<jumlah_tiket<<endl;
		
		total_harga = jumlah_tiket*harga;
		cout<<"Total harga : Rp."<<total_harga<<endl;
		
		if (jumlah_tiket <= 5){
			harga_akhir = total_harga;
			diskon = "0";
		}else{
			harga_akhir = total_harga - (total_harga * 0.1);
			diskon = "10%";	
		}
		
		cout<<"Diskon : "<<diskon<<endl;
		cout<<"Total harga yang harus dibayar : "<<harga_akhir<<endl;
		
		cout<<"\nKonfirmasi Pesanan(y/n) :";
		cin>>konfirmasi;
		
		if (konfirmasi == 'y'){
			cout<<"Transaksi Berhasil"<<endl;
		}else{
			cout<<"Transaksi Gagal"<<endl;
		}
		
		cout<<"\nIngin melakukan pesanan lagi(y/n)? : ";
		cin>>ulangi;
	}while(ulangi == 'y' || ulangi == 'Y');
	
	cout<<"\nTerima Kasih Atas Kunjungannya"<<endl;
		return 0;
}
