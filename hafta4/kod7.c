#include <stdio.h>
int main(){
	int sayi=1;
	while(sayi!=0){
		printf("Bir sayi giriniz");
		scanf("%d",&sayi);
		printf("Giridiginiz sayi %ddir\n", sayi);
	}
	printf("Program sifir girdiginiz icin sonlanmistir.\n");
	return 0;
}
