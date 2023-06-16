// Online C compiler to run C program online
#include <stdio.h>
/* obter notas do aluno,
calcular média
verificar se o aluno foi aprovado ou nao
se a media >= 7 aprovado
senão reprovado
*/
int main(void) {
    // declaração variaveis
    float nota1, nota2, media;
    
    //obter as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    //calcula a média
    media = (nota1 + nota2)/2;
    
    //verifica se foi aprovado ou não
    if(media >= 7)
    printf("Parabéns, você foi aprovado!");
    else
    printf("Reprovado, suas notas não atingiram a média necessária para passar");
    
    return 0;
}