#include <stdio.h>

float Tinhchuvihcn(float chieudai, float chieurong) {
    float Chuvihcn = chieudai * chieurong;
    return Chuvihcn;
}

float Tinhdientichhcn(float chieudai, float chieurong) {
    float Dientichhcn = 2 * (chieudai + chieurong);
    return Dientichhcn;
}

int main() {
    float chieudai, chieurong;
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &chieudai);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &chieurong);

    float Chuvihcn = Tinhchuvihcn(chieudai, chieurong);
    float Dientichhcn = Tinhdientichhcn(chieudai, chieurong);

    printf("Chi hinh chu nhat: %.2f\n", Chuvihcn);
    printf("Dien tich hinh chu nhat: %.2f\n", Dientichhcn);

    return 0;
}
