

#include <stdio.h>

int main(void) {
    float nota1,nota2,media;
    printf("Qual a primeira nota?");
    scanf("%f",&nota1);
    printf("Qual a segunda nota?");
    scanf("%f",&nota2);
    media = (nota1+nota2)/2;
    // LÓGICA CORRIGIDA
    if(media>=9){
        printf("media : %.2f, parabens! Se inscreva para a monitoria!!!!", media);
    } else if(media>=6){
        printf("media : %.2f, aprovado", media);
    } else {
        printf("media : %.2f, te convido a estudar mais", media);
    }
    return 0;

