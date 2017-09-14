#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerVetor(float v[], int tv[]);
void exibirVetor(float v[], int tv);

int main(){
	
	float v[20];
	int tv[1];
	
	
	lerVetor(v, tv);
	exibirVetor(v, tv[0]);


}

void lerVetor( float v[ ], int tv[] ) {
	
	float temp; tv[0] = -1;
	int conta = 1;
 	
 	printf("\nDigite as componentes indicadas de cada vetor ou -999 para encerrar\n");
 	printf("Valor %d:", conta);
 	scanf("%f", &temp);
 	
 	while( temp != -999 && conta <= 20 ) {
 	tv[0]++;
 	conta++;
 	v[ tv[0] ] = temp;
 		printf("Valor %d:", conta);
 		scanf("%f", &temp);
	}
 	tv[0]++; // Define a quantidade de elementos do vetor

}


void exibirVetor( float v[ ], int tv ) {
 int k;
 for( k = 0; k < tv; k++ ) {
 	printf("%d",k+1); 
 	printf("componente: %.2f\n",v[ k ] );
 	}
}

