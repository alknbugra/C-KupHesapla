// ders 8 say�n�n k�p�n� bul
#include<stdio.h>
#define kup(x) ((x)*(x)*(x))

int main(){
	int a;
	
	printf("Bir tam sayi giriniz : ");
	scanf("%d",&a);
	printf("\nGirdiginiz sayinin kupu : %d",kup(a));
	return 0;
}
