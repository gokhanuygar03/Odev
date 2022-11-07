#include <stdio.h>
void main(){
    int n, k;
    float sonuc;
    printf("Bir sayi giriniz.");
    scanf("%d", &n);
    sonuc = 0;
    for(k=1; k<=n; k++){
        sonuc += ((k*k)+1.23)/(k-0.25);
    }
    printf("%f", sonuc);
}