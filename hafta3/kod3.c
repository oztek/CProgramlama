#include <stdio.h>
int main(){
	int ort;
	printf("Ortalama notunu gir");
	scanf("%d", &ort);
	printf("Giridiginiz %d\n", ort);
	if(ort > 50 ) {
		if(ort < 70) { 
			printf("XXXGecer\n");
		}
		else {
			if(ort < 80) {
				printf("XXXOrta\n");
			}
		}
	}
	else {
		printf("Kalır\n");
	}
	if(ort > 50 && ort <70) {
		printf("Gecer\n");
	}
	return 0;
}
