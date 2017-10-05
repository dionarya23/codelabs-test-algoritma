#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Nama : Dion Arya Pamungkas
NIM : 10517016
Kelas : IS1
Semester 1
Prodi: Sistem Informasi
Universitas Komputer Indonesia
*/


/* Declare Fungsi agar tidak error */
void percobaan();
void bilangan_genap();
void anak_ayam();
void angka_segitiga();
void tidak_terdaftar();
void logout();
void utama();

int i,
	password = 1234,
	user_pass,
	percobaan_user = 1,
	pilihan_user,
	
	/* Variabel Untuk Anak Ayam */
	jumlah_ayam_sesudah_diambil,
	ayam,
	jumlah_ayam_sebelum_diambil,
	/* Bilangan Genap */
	bil_genap, total,
	
	/* Angka Segitiga */
	baris;

int main() {
	
	while(percobaan_user < 4){
		
		percobaan();
		
	if(user_pass != password){
		percobaan_user=percobaan_user+1;
		printf("\t\t\t\tPassword anda Salah\n \t\t\t\tCoba Lagi!!\n\t\t\t tekan Enter!!\n");
		system("PAUSE");
	}else{
		percobaan_user = 4;
		printf("\t\t\t\tPassword anda Benar !!\n\t\t\t\t Silahkan Tekan Enter!!\n");
		system("PAUSE");
		utama();
	}
		
	}
	
	getch();
	return 0;
}

/* FUNGSI AUTENTIKASI */
void percobaan(){
	system("cls");
	
	printf("\n\n\n\n\n\t\t\t\tMasukan Password (Percobaan ke %d): ", percobaan_user);
	scanf("%d", &user_pass);
	
}


/*Bilangan Genap */
void bilangan_genap(){
	system("cls");
	
	total = 0;
	
	
	printf("Masukan Batas Bilangan: ");
	scanf("%d", &bil_genap);
	
	printf("Jumlah Bilangan Genap = ");
	
	/* Menguji apakah bilangan nya ganjil atau genap */
	if(bil_genap%2 ==0){
	
	for(i=0;i<=bil_genap;i+=2){
		
		if(i !=0 ){
			if(i!=2){
			printf("+ %d ", i);
		}else{
			printf("%d ", i);
		}
			total += i;
		}
		
	}
	printf("\n                      = %d\n", total);
  }else{ //Jika Bilangan Gajil Masuk Kesini
	for(i=0;i<=bil_genap-1;i+=2){
		
		
		if(i !=0 ){
			if(i!=2){
			printf("+ %d ", i);
		}else{
			printf("%d ", i);
		}
			total += i;
		}
		
	}
	printf("\n                      = %d\n", total);
  } //End Of Else
  system("PAUSE");
  utama();
}

/* FUNGSI UNTUK MENGHITUNG ANAK AYAM */
void anak_ayam(){
	system("cls");
	
	printf("Masukan Jumlah Anak Ayam: ");
	scanf("%d", &ayam);
	jumlah_ayam_sebelum_diambil=ayam;
	
	printf("\n\n");
	
	if(ayam==0){
		printf("ANAK NYA NOL??, SEKIAN SALAM BOGENG\n");
		system("PAUSE");
		utama();
	}else{
		for(i=0; i<ayam; i++){
			
			/* Jika Ayam Tinggal Satu */
			if(jumlah_ayam_sebelum_diambil==1){
				printf("Anak Ayam turun %d, Mati satu tinggal induknya\n", 1);
				system("PAUSE");
				utama();
			}else{
					
			jumlah_ayam_sesudah_diambil = jumlah_ayam_sebelum_diambil-1;
			printf("Anak ayam turun %d, Mati satu tinggal %d\n", jumlah_ayam_sebelum_diambil,jumlah_ayam_sesudah_diambil);
			jumlah_ayam_sebelum_diambil=jumlah_ayam_sesudah_diambil;
			
			
			}
			
		} /* END OF FOR */
	}
}

void angka_segitiga(){
	system("cls");
	
	printf("Masukan Jumlah Baris : ");
	scanf("%d", &baris);
	
	
	
	system("PAUSE");
	utama();
}


/* Fungsi pilihan tidak terdaftar */
void tidak_terdaftar(){
	system("cls");
	
	printf("ANDA SALAH PILIH !!!\n");
	system("PAUSE");
	utama();
}



/* FUNGSI LOGOUT */
void logout(){
	system("cls");
	
	printf("Terimakasih Sudah Memakai program ini\n SALAM BOGENG :D\n");
	system("PAUSE");
}

/* FUNGSI MENU */
void utama(){
	system("cls");
	
	printf("\n\n\n\n\n\t\t\t\t =============================\n\t\t\t\t|             MENU            |\n");
	printf("\t\t\t\t =============================\n");
	printf("\t\t\t\t| 1. Kasus Anak Ayam          |\n");
	printf("\t\t\t\t| 2. Jumlah Bilangan Genap    |\n");
	printf("\t\t\t\t| 3. Tampilan Angka Segitiga  |\n");
	printf("\t\t\t\t| 4. Keluar                   |\n");
	printf("\t\t\t\t===============================\n");
	printf("\t\t\t\t Masukan Pilihan 1 - 4: ");scanf("%d", &pilihan_user);
	
	switch(pilihan_user){
		case 1:
			anak_ayam();
			break;
		case 2:
			bilangan_genap();
		     break;
		case 3:
			angka_segitiga();
			break;
			
		case 4:
			logout();
			break;
			
		default:
			tidak_terdaftar();
		break;
	}
}
