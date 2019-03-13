#include <stdio.h>
int main(){
	int i=25, toplam=0;
	while(i<=45) {
		if(i%5==0 && i%2!=0){
			printf("%d\n", i);
			toplam+=i; //toplam=toplam+i
		}
		i++;
	}
	printf("======\nToplam %d\n",toplam);
	return 0;
}
