#include <stdio.h>
int main(){
long int a;
printf("Bes basamakli bir sayi girin");
scanf("%d", &a);
char birler, onlar, yuzler, binler, onbinler;
birler = a%10;
onlar = (a%100-birler)/10;
yuzler = (a%1000-onlar)/100;
binler = (a%10000-yuzler)/1000;
onbinler = (a%100000-binler)/10000;
if (a == (birler*10000 + onlar*1000 + yuzler*100 + binler*10 + onbinler)){
    printf("Palindromdur");
}
else{
    printf("Degildir");
}
return 0;
}