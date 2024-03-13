#include <stdio.h>

int main () {
	int V[8];
		
	for(int i = 0; i <= 7; i++) {
		scanf("%d", &V[i]);
	}
	
	for(int i = 0; i <= 7; i++) {
		if(V[i] > 0) {
			printf("Positivo: ");
			printf("%d\n", V[i]);
		} if(V[i] < 0 ) {
			printf("Negativo: ");
			printf("%d\n", V[i]);
		}
	}
	
	
	return 0;
}
