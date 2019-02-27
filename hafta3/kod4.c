#include <stdio.h>
int main(){
	int ort;
	printf("Ortalama notu giriniz");
	scanf("%d", &ort);
	if(ort < 50){
		printf("Kalır");
	}
	else if(ort < 70) {
		printf("Gecer");
	}
	else {
		printf("Anlamsiz");
	}
	printf("\n");
	return 0;
}
