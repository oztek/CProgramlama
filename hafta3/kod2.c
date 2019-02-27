#include <stdio.h>
int main(){
	int sayi;
	printf("Bir sayi giriniz.");
	scanf("%d", &sayi);
	if(sayi>0) {
		printf("Giridiğiniz %d sayisi ", sayi);
		printf("Pozitif\n");
	}
	else {
		printf("Negatif\n");
	}
return 0;
}
