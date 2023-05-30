#include <stdio.h>

// Kiem tra so du
void Kiemtrasodu(float sodu){
	printf("So du trong tai khoan cua ban la:%.2f\n",sodu);
}
// Rut tien	
float Ruttien(float sodu, float sotien){
	if(sotien<=sodu){
		sodu-=sotien;
		printf("Rut tien thanh cong. So du con lai cua ban:%.2f\n", sodu);
	} else{
		printf("Rut tien khong thanh cong");
	}
	return sodu;
	
}
	
// Gui tien
float Guitien(float sodu, float sotien){
	sodu += sotien;
	printf("Gui tien thanh cong. So tien con lai cua ban:%.2f\n", sodu);
	return sodu;
}

int main(){
	float sodu = 589000.00;
	int Luachon;
	float sotien;
	
do{
	printf("1. Kiem tra so du tai khoan\n");
	printf("2. Rut tien\n");
	printf("3. Gui tien\n");
	printf("4. Thoat\n");
	printf("Ban vui long chon:");
	scanf("%d",&Luachon);
	
		switch(Luachon){
			case 1:
				Kiemtrasodu(sodu);
				break;
			case 2:
				printf("Nhap so tien ban muon rut:");
				scanf("%f",&sotien);
				sodu=Ruttien(sodu,sotien);
				break;
			case 3:
				printf("Nhap so tien ban muon gui:");
				scanf("%f",&sotien);
				sodu=Guitien(sodu,sotien);
				break;
			case 4:
				printf("Cam on ban da su dung dich vu cua chung toi");
				break;
			default:
				printf("Lua chon khong hop le. Vui long chon lai");
				break;
		} 
	} while (Luachon != 4);
	return 0;
}

	
	

