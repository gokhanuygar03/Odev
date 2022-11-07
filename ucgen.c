#include <stdio.h>
void main(){
    int k, n, a;
    printf("Bir sayi girin.");
    scanf("%d", &n);
    for(k=1; k<=n; k++){
        for(a=1;a<=k;a++){
            printf("#", a);
        }
    printf("\n",n);
    }
}