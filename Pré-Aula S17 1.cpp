#include<stdio.h>
#include<math.h>
#include<locale.h>

#define n 2      
int main (){  
	setlocale(LC_ALL, "Portuguese");
	   
	int m[n][n], i, j, r[n][n], maior;      
	for (i=0; i<2; i++){        
		for(j=0; j<2; j++){         
			printf("Digite o número da linha, %d coluna %d matriz.", i+1, j+1);         
			scanf("%d%*c",& m[i][j]);        
		}     
	}      
	maior=m[0][0];      
	for (i=0; i<n; i++){         
		for (j=0; j<n; j++){             
			if (m[i][j]>maior){                 
				maior=m[i][j];             
			}         
		}     
	}      
	for (i=0; i<n; i++){         
		for (j=0; j<n; j++){             
			r[i][j]=maior*m[i][j];         
		}     
	}      
	printf("\nO maior elemento da matriz: %d. A matriz resultante:\n", maior);     
	for (i=0; i<n; i++){         
		for (j=0; j<n; j++){             
			printf("%d\t", r[i][j]);         
		}         
		printf("\n");     
	}           
	return 0;     
} 
