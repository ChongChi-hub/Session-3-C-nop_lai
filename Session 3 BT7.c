#include <stdio.h>

int main()
{
    int n, sum;
    printf("Nhap so n co 4 chu so: ");
    scanf("%d", &n);
    //vd: 1234
    //1234 / 1000: chia lấy phần nguyên để lấy ra số 1.
    //1234 / 100 % 10: chia lấy phần nguyên được 12 sau đó chia lấy dư cho 10 lấy được số 2.
    //1234 / 10 % 1O: chia lấy phần nguyên được 123 sau đó chia lấy dư cho 10 lấy được số 3.
    //1234 % 10 : chia lấy dư lấy được số 4.
    int nghin, tram, chuc, donVi;
    nghin = n / 1000;
    tram = n / 100 % 10;
    chuc = n / 10 % 10;
    donVi = n % 10;
    
    sum = nghin + tram + chuc + donVi;
    printf("Tong cua 4 chu so la: %d", sum);

    return 0;
}
