#include<stdio.h>

int tamanho(char str[]);
int move(char str[], int pos, int tamanho);
int sigilo(char chave[], char str[]);
int quebra(char chave[], char str[]);
void limpaStr(char s[]);

int main(void)
{
    char msg[100], p[100];
    char resp;
    int x;

    printf("\nSigilo ou Quebrar Sigilo [S ou Q]?");
    scanf("%c%*c", &resp);
    switch(resp)
    {   
        case 's':
        case 'S':
            printf("\nMensagem: ");
            fgets(msg, 100, stdin);
            printf("\nPalavra: ");
            fgets(p, 100, stdin);
            limpaStr(msg);
            limpaStr(p);
            x = sigilo(p, msg);
            printf("\nMensagem: %s\n", msg);
            break;
        case 'q':
        case 'Q':
            printf("\nMensagem: ");
            fgets(msg, 100, stdin);
            printf("\nPalavra: ");
            fgets(p, 100, stdin);
            limpaStr(msg);
            limpaStr(p);
            x = quebra(p, msg);
            printf("\nMensagem: %s\n", msg);
            
            break;
        default:
            printf("\nEscolha invalida!");
            break;

    }
    return 0;
}

int quebra(char chave[], char str[]){
    int i = 0, j = 0, w = 0, x = 0, strSize = tamanho(str), chaSize = tamanho(chave);
    while(i < strSize){
        if(str[i] == '*'){
            for(j = strSize; j > i; j--){
                str[j+(chaSize-1)] = str[j];
            }
            x = i;
            for(j = i; j < (x+(chaSize)); j++, w++){
                str[j] = chave[w];
            }
        }
        i++; w = 0; j = 0; x = 0; strSize = tamanho(str);
    }
    return 0;    
}

int sigilo(char chave[], char str[]){
    int x = 0, i = 0, j = 0, m = tamanho(chave), n = tamanho(str);
    for(i = 0; str[i] != '\0'; i++){
        for(j = 0; chave[j] != '\0'; j++){
            if(str[i+j] == chave[j])
                x++;
            else
                x = 0;
        }
        if(x == m){
            x = 0;
            move(str, i, m);
        }
    }
    return 0;    
}

int move(char str[], int pos, int qtd){
    int i, nElemens = tamanho(str);
    str[pos] = '*';
    for(i = pos; i < nElemens; i++)
        str[i+1] = str[i+qtd];
    return 0;
}

int tamanho(char s[]){
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

void limpaStr(char s[]){
    int i = 0;
    while(s[i] != '\n') i++;
    s[i] = '\0';
}
