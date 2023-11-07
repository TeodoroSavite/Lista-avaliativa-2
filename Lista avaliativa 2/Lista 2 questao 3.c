#include <stdio.h>
#include <string.h>


int main(){
    int matrizA[4][4];
    int matrizB[4][4];
    int resultado[4][4];
    char operacao[5];

    //Matriz A
    for(int i = 0;i < 4;i++){
        for(int j = 0;j< 4;j++){
        scanf("%d", &matrizA[i][j]);
        }
    }
    //Matriz B
        for(int i = 0;i < 4;i++){
            for(int j = 0;j< 4;j++){
        scanf("%d", &matrizB[i][j]);
        }
    }

    scanf("%s", operacao);
    //operações
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(operacao, "soma") == 0) {
                resultado[i][j] = matrizA[i][j] + matrizB[i][j];
            } else if (strcmp(operacao, "sub") == 0) {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
            } else if (strcmp(operacao, "mult") == 0) {
                resultado[i][j] = 0;
                for (int X = 0; X < 4; X++) {
                    resultado[i][j] = resultado[i][j] + matrizA[i][X] * matrizB[X][j];
            }
        }
    }
}
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}