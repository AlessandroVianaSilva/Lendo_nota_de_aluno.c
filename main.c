#include <stdio.h>

int main(void)
{
  /*Criando a struct */
  struct ficha_de_aluno
  {
    int matricula;
    char nome[30];
    float notas[1];
  };
  
  /*Criando a variável aluno que será do
  tipo struct ficha_de_aluno */
  struct ficha_de_aluno aluno;
  
  printf("\n---------- Cadastro de aluno -----------\n\n\n");
  
  printf("Nome do aluno ......: ");
  fflush(stdin);
  
  /*usaremos o comando fgets() para ler strings, no caso o nome
  do aluno e a disciplina
  fgets(variavel, tamanho da string, entrada)
  como estamos lendo do teclado a entrada é stdin (entrada padrão),
  porém em outro caso, a entrada tambem poderia ser um arquivo */
  
  fgets(aluno.nome, 40, stdin);
  
  

  printf("Informe a 1a. nota:  ");
  scanf("%f", &aluno.notas[1]);

  
  
  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("Nome ...........: %s", aluno.nome);
  printf("Nota da Prova 1 ...: %.2f\n" , aluno.notas[1]);
  
  
  return(0);
}