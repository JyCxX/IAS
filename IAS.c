
int main(void) {
    float nota1,nota2,media;
    printf("Qual a primeira nota?");
    scanf("%f",&nota1); 
    printf("Qual a segunda nota?");
    scanf("%f",&nota2); 
    media = (nota1+nota2)/2;
    if(media>=6){
    printf("media : %.2f aprovado", media);
    } else if(media>=9){
    printf(" se inscreva para a monitoria!!!!");
    } else
    printf("media : %.2f te convido a estudar", media);
    return 0;
}
