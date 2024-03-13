#include <stdio.h>

int main () {
	int matriz[6][3];
	
	printf("Digite os elementos das linhas e das coluna\n");
	for(int i = 0; i<7; i++) {
		for(int j = 0; j<4; j++) {
			printf("Linha: %d\n", i);
			printf("Coluna: %d\n", j);
			scanf("%d", &matriz[i][j]);
		}
	}
		
	return 0;
}
