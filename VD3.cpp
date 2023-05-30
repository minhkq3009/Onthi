#include <stdio.h>

char Tinhxephang(int Diemso) {
    if (Diemso >= 90) {
        return 'A';
    } else if (Diemso >= 80 && Diemso <= 89) {
        return 'B';
    } else if (Diemso >= 70 && Diemso <= 79) {
        return 'C';
    } else if (Diemso >= 60 && Diemso <= 69) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int Diemso;
    printf("Nhap diem so cua sinh vien: ");
    scanf("%d", &Diemso);
    char Xephang = Tinhxephang(Diemso);
    printf("Sinh vien xep loai: %c\n", Xephang);
    return 0;
}

	
	
	
	
	

