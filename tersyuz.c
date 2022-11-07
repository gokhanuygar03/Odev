#include <stdio.h>
int main(){
long int a;
printf("Dort basamakli bir sayi giriniz.");
scanf("%d", &a);
char bas1 , bas10 ,  bas100 , bas1000;
bas1 = a%10;
bas10 = (a%100 - bas1)/10;
bas100 = (a%1000 - bas10)/100;
bas1000 = (a%10000 - bas100)/1000;
if ((bas1000*10 + bas100) * (bas10*10 + bas1) == (bas100*10 + bas1000) * (bas1*10 + bas10))
printf("Sayi tersyuzdur");
else
printf("Sayi tersyuz degildir");
return 0;
}