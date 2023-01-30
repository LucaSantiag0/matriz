#include<stdio.h>
#include<math.h>
#include<locale.h>

//define o numero de linhas e colunas
#define     ROW         3
#define     COL         10

/*
 * programa principal
 */
int main(int argc, char** argv) {
    int notas[ROW][COL], //a matriz com as notas
            l, k, //auxiliares da matriz
            menor,//auxiliar para calculo da menor nota
            prova1, prova2, prova3;//auxiliar para contar as menores notas nas provas

    //captura os dados
    printf("Entre com os dados: \n");
    for (l = 0; l < ROW; l++) {
        printf("\nNotas para a prova %d\n", l+1);
        for (k = 0; k < COL; k++) {
            printf("Nota para o aluno %d = ", k+1);
            scanf("%d", &notas[l][k]);
        }
    }
    
    //imprime o relatorio
    //para todos os 10 alunos
    printf("\n\nRELATORIO:");
    prova1 = prova2 = prova3 = 0;//zera os contadores de alunos com menores notas
    for (k = 0; k < COL; k++) {
        //para cada aluno mostra o numero, as notas, a menor nota
        printf("\n\n\nPara o aluno %d as notas foram: \n\t", k+1);
        menor = 10; //marca a menor nota para reducao        
        for (l = 0; l < ROW; l++) {
            //identifica a menor nota
            if(notas[l][k] <= menor)
                menor = notas[l][k];
            
            //imprime as notas
            printf("Nota para a prova %d foi = %d\n\t", l+1, notas[l][k]);
        }
        
        //imprime a menor nota
        printf("\n\tPara este aluno a MENOR nota foi: %d", menor);
        
        //conta o total de alunos com menores notas nas provas 1, 2 e 3
        for (l = 0; l < ROW; l++) {
            if(menor == notas[l][k] && l == 0){
                prova1++;
                break;
            }
            else if(menor == notas[l][k] && l == 1){
                prova2++;
                break;
            }
            else if(menor == notas[l][k] && l == 2){
                prova3++;
                break;
            }
        }
    }
    
    //imprime o total de alunos que tieram a menor nota nas provas 1, 2, e 3
    printf("\n\n\nQuantidade de alunos que tiveram menor notas na prova 1 foi de %d\n", prova1);
    printf("Quantidade de alunos que tiveram menor notas na prova 2 foi de %d\n", prova2);
    printf("Quantidade de alunos que tiveram menor notas na prova 3 foi de %d\n", prova3);
    
    //termina sem erros
    return (EXIT_SUCCESS);
}