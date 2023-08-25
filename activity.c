#include <stdio.h>

int main(){
char nome;
int telefone, idade;

printf("Digite seu nome: \n ");
scanf("%c", nome);

printf("Digite seu telefone: \n ");
scanf("%d", &telefone);

printf("Digite sua idade: \n ");
scanf("%d", &idade);

printf("Seu nome é %c , você tem %d anos e seu telefone é %d ", nome, idade, telefone);





}