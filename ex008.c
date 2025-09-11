#include <stdio.h>

int main(){
    char genero;
    int tam=50, cont_mulheres=0;
    float  altura, media, mulher_altura_cont=0;

    for(int i=1; i<=tam; i++){

    printf("\nDigite seu genero(M/F):");
    scanf(" %c", &genero);
    printf("\nDigite sua altura:");
    scanf(" %f", &altura);

        if(genero == 'F' || genero == 'f'){
            cont_mulheres++;
            mulher_altura_cont = mulher_altura_cont + altura;

        }else{
        }
    }
    if(cont_mulheres > 0){
    media = mulher_altura_cont / cont_mulheres;
    printf("\n========MEDIA DA ALTURA DAS MULHERES========\n");
    printf("O mumero de mulheres registrado aqui foi de %d\n", cont_mulheres);
    printf("A media de altura das %d mulheres foi %.2f", cont_mulheres, media);
    }else{
        printf("Nenhuma mulher registrada");
    }

    return 0;
}

