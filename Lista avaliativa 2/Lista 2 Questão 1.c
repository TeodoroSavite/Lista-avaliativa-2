#include <stdio.h>
    int main(){

    int vetor[10];
    int A = 10;
    int b = 0;


//salve os valores do vetor
    for(int i=0; i<10;i++){
    scanf("%d", &vetor[i]);
    }

while(A > 1){

    for(int i= 0; i < A; i++){
        printf("%d",vetor[i]);//imprime os valores do vetor
        while(b < A -1){
            printf(" ");
            b++;
            break;
        }
    
    
  
    }

    printf("\n");//pula uma linha para o próximo 

    for(int i = 0; i < 10; i++){
        vetor[i] = vetor[i] + vetor[i + 1]; //realiza a soma 
     b = 0;
    }

    A--; //exclui o ultimo numero e volta para a impressão 

}
        printf("%d\n",vetor[0]);
        

        return 0;
    }