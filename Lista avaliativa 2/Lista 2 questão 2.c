#include <stdio.h>
#include <string.h>

int main(){
    float forcaA;
    float forcaB;
    char TimeA[30];
    char TimeB[30];
    char Nome[30];
    char posicao;
    int forca;
    int habilidade[11] = {0};
    int habilidadeB[11] = {0}; 

    gets(TimeA);
    for (int i = 0; i < 11; i++){
        scanf(" %200[^;]; %c; %d", Nome, &posicao, &forca);
    if(posicao == 'G'){
        habilidade[0] = forca;
    } 
    if (posicao == 'L' && habilidade[2]== 0){
            habilidade[2] = forca;
    }else if(posicao == 'L'){
        habilidade[1] = forca;
    } 
    if (posicao == 'Z' && habilidade[4]==0){
            habilidade[4] = forca;
    }else if(posicao == 'Z'){
        habilidade[3] = forca;
    } 
    if (posicao == 'V' && habilidade[6]==0 ){
            habilidade[6] = forca;
    }else if(posicao == 'V'){
        habilidade[5] = forca;
    } 
    if (posicao == 'M' && habilidade[8]==0 ){
            habilidade[8] = forca;
    }else if(posicao == 'M'){
        habilidade[7] = forca;
    } 
    if (posicao == 'A' && habilidade[9]==0 ){
            habilidade[9] = forca;
    }else if(posicao == 'A'){
        habilidade[10] = forca;
    } 
    }

   fflush(stdin);
    gets(TimeB);
    for (int i = 0; i < 11; i++){
        scanf(" %200[^;]; %c; %d", Nome, &posicao, &forca);

    if(posicao == 'G'){
        habilidadeB[0] = forca;
    } 
    if (posicao == 'L' && habilidadeB[2]== 0){
            habilidadeB[2] = forca;
    }else if(posicao == 'L'){
        habilidadeB[1] = forca;
    } 
    if (posicao == 'Z' && habilidadeB[4]==0){
            habilidadeB[4] = forca;
    }else if(posicao == 'Z'){
        habilidadeB[3] = forca;
    } 
    if (posicao == 'V' && habilidadeB[6]==0 ){
            habilidadeB[6] = forca;
    }else if(posicao == 'V'){
        habilidadeB[5] = forca;
    } 
    if (posicao == 'M' && habilidadeB[8]==0 ){
            habilidadeB[8] = forca;
    }else if(posicao == 'M'){
        habilidadeB[7] = forca;
    } 
    if (posicao == 'A' && habilidadeB[9]==0 ){
            habilidadeB[9] = forca;
    }else if(posicao == 'A'){
        habilidadeB[10] = forca;
    } 
    }


forcaA = (8 * habilidade[0] + 10 * (habilidade[1] + habilidade[2]) + 5 * (habilidade[3] + habilidade[4]) + 8 * (habilidade[5] + habilidade[6]) + 11 * (habilidade[7] + habilidade[8]) + 12 * (habilidade[9] + habilidade[10])) / 100.0;
printf("%s: %.2f de forca\n", TimeA, forcaA);


forcaB = (8 * habilidadeB[0] + 10 * (habilidadeB[1] + habilidadeB[2]) + 5 * (habilidadeB[3] + habilidadeB[4]) + 8 * (habilidadeB[5] + habilidadeB[6]) + 11 * (habilidadeB[7] + habilidadeB[8]) + 12 * (habilidadeB[9] + habilidadeB[10])) / 100.0;
 printf("%s: %.2f de forca\n", TimeB, forcaB);
 


    if(forcaA > forcaB){
        printf("%s eh mais forte\n", TimeA);
    }else if(forcaB > forcaA){
        printf("%s eh mais forte\n", TimeB);
    }else{
        printf("Empate de forca\n");
    }



    
    return 0;
}