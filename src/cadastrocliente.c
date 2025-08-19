#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/criararquivo.h"

//Vamos criar uma estrutura(struct) que 
//representa o cliente, com seus respectivos
//dados. 
struct Cliente{
    char nome[100];
    char email[100];
    int idade;
};

int main(){
   
    system("clear");
    //Vamos definir uma variável do tipo struct de Cliente
    //assim podemos acessar as propriedades da estrutura cliente
    struct Cliente cli;
    // scanf("%s",cli.nome);
    printf("Digite o nome do cliente: \n");
    fgets(cli.nome,sizeof(cli.nome),stdin);

    printf("Digite o e-mail do cliente: \n");
    fgets(cli.email,sizeof(cli.email),stdin);

    printf("Digite a idade do cliente: \n");
    scanf("%d",&cli.idade);

    printf("%s - %s - %d anos\n",cli.nome, cli.email, cli.idade);
    //Realizar a concatenação(junção de elementos distintos) para 
    //gravar os dados de uma só vez
    char dados_cliente[100];
    char nome[30] = {"Nome: "};
    strcat(nome, cli.nome);
    strcat(dados_cliente,nome);

    char email[30] = {"Email: "};
    strcat(email, cli.email);
    strcat(dados_cliente,email);
    
    //Vamos converter a idade, que é um valor inteiro()int, para String
    //Assim será possível concatenar o texto Idade com o valor real da
    //idado do cliente.
    // Utilizaremos um novo array de chars que irá guardar o número, agora no
    //formato de string. E, também usaremos o comando sprintf(String Print Format)
    //o inicio do comando pede o array de chars para guardar o resultado 
    //da conversão, o segundo item do comando pede o formato original do valor
    // a ser convetido, neste caso %d decimal. E, o último valor é o número 
    // que será convertido (cli.idade)

    
    char idade[30] = {"Idade: "};
    char idadecli[20];
    char id = sprintf(idadecli,"%d",cli.idade);
    strcat(idade, idadecli);
    strcat(dados_cliente,idade);

    
    char *resultado = criar("files/cadastro.txt",dados_cliente);
    printf("%s\n",resultado);


    return 0;
    

}