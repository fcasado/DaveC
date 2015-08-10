#include<stdio.h>

int main(void)
{
    int c,i=0;
    struct cadastro {
        char nome[100];
        char endereco[100];
        int idade;    
    };
    
    struct cadastro pessoal;

    printf("\nInforme o nome: ");
    while((c = getchar()) != '\n'){
        pessoal.nome[i++]=c;
    }
    i=0;  
    printf("\nInforme o endereço: ");
    while((c = getchar()) != '\n'){
        pessoal.endereco[i++]=c;
    }
    printf("\nInforme a idade: ");
    scanf("%d",&pessoal.idade);

    i=0;
    printf("\nNome: ");
    while(pessoal.nome[i] != '\0')
        putchar(pessoal.nome[i++]);    
    i=0;
    printf("\nEndereço: ");
    while(pessoal.endereco[i] != '\0')
        putchar(pessoal.endereco[i++]);    
    
    printf("\nIdade: %d",pessoal.idade);
    
    return 0;
}
