
//FUNCOES


//------------------------------------------------------------------------------CREATEDATA
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* #include "ydados_aluno.h"
#include "ydados_prof.h" */

//#define TAM 40
//#define QTPROF 2

void createData(char aluno[]/*, char idade[]*/, char curso[]/*, char periodo[]*/, char matricula[]/*, char sala[], char turno[]*/, char prof[][TAM], char materia[]/*, int QTPROF*/){

  int resp, s=1, n=2, m=3, i=0;

  printf("\n---------------------------------\n");
  printf("Dejesa inserir Alunos ou Professores?\n[1] - Alunos\n[2] - Professores\n[3] - Menu\n");
  scanf("%i",&resp);

  while(i==0){
    if(s==resp){
    //função entrar dados aluno
    dados_aluno(aluno/*, idade*/, curso/*, periodo*/, matricula/*, sala, turno*/);
      i++;
    }
    else if(n==resp){
      //função entra dados professor
      dados_prof(prof, materia/*, QTPROF*/);
      i++;
    }
    else if(m==resp){
      i++;
    }
    else if(resp>3){
      printf("Opcao invalida. Escolha uma das opcoes acima.\n");
      scanf("%i", &resp);
    }
  }
}



//------------------------------------------------------------------------------DELETEDATA
void deleteData(){}


//-----------------------------------------------------------------------------MOSTRARMENU
#include <stdio.h>

void mostraMenu(){
  //printf("\033[0;0H\033[2J");
  printf("\n---------------------------");
  printf("\n APP CRUD - Menu Principal ");
  printf("\n [1] Cadastrar ");
  printf("\n [2] Pesquisar ");
  printf("\n [3] Atualizar ");
  printf("\n [4] Apagar ");
  printf("\n [5] Finalizar ");
  printf("\n Opcao: ");
}


//----------------------------------------------------------------------------READDATA
#include <stdio.h>
#include <string.h>
#define TAM 40
//#define QTPROF 2


void readData(char aluno[]/*, char idade[]*/, char curso[]/*, char periodo[]*/, char matricula[]/*, char sala[], char turno[]*/, char prof[][TAM], char materia[][TAM]/*, int QTPROF*/){
  
  int resposta, escolha, i=0, s=1, n=2;

  //printf("\033[0;0H\033[2J");
   printf("\n-----------------------------\n");
  // printf("Olá, Deseja Pesquisar por algum Dado?\n");
  // printf("[1] - SIM\n[2] - NÃO\n");
  // scanf("%i",&resposta);

  printf("\nEscolha uma das opções abaixo:\n");
  printf("[1] - Nome Aluno\n[2] - Curso Aluno\n[3] - Matrícula Aluno\n[4] - Nome Professor(1)\n[5] - Nome Professor (2)\n[6] - Materia Professor (1)\n[7] - Materia Professor (2)\n");
  scanf("%i",&escolha);

  //if(s==resposta){
    // while(i==0){
      if(escolha<=7){
        switch (escolha){
          case 1:
            printf(">>>%s",aluno);
          break;
    
          // case 2:
          //   printf(">>>%s",idade);
          // break;
    
          case 2:
            printf(">>>%s",curso);
          break;
    
          // case 4:
          //   printf(">>>%s",periodo);
          // break;
    
          // case 5:
          //   printf(">>>%s",turno);
          // break;
    
          case 3:
            printf(">>>%s",matricula);
          break;
    
          // case 7:
          //   printf(">>>%s",sala);
          // break;
          
          case 4:
            printf(">>>%s",prof[0]);
          break;

          case 5:
            printf(">>>%s",prof[1]);
          break;

          case 6:
            printf(">>>%s",materia[0]);
          break;

          case 7:
            printf(">>>%s",materia[1]);
          break;
            
          i++;
        }
      }
      else if(escolha>7 || escolha==0){
        printf("\nOpção Invalida\nEscolha um dos números apresentados\n");
        scanf("%i\n",&escolha);
      }
}


//------------------------------------------------------------------------------UPDATEDATA
void updateData(){
  
}


//------------------------------------------------------------------------------YDADOS_ALUNOS
#include <stdio.h>
#define TAM 40

void dados_aluno(char aluno[]/*, char idade[]*/, char curso[]/*, char periodo[]*/, char matricula[]/*, char sala[], char turno[]*/){
  
  printf("Olá, Bem Vind@ ao Sistema de Cadastramento.\nPor favor, insira seus dados abaixo.\n\n");
  printf("Nome: ");
  scanf("%s",aluno);
  // printf("Idade: ");
  // scanf("%s",idade);
  printf("Curso: ");
  scanf("%s",curso);
  // printf("Período: ");
  // scanf("%s",periodo);
  // printf("Turno: ");
  // scanf("%s",turno);
  printf("Matrícula: ");
  scanf("%s",matricula);
  // printf("Sala: ");
  // scanf("%s",sala);
}



//---------------------------------------------------------------------------YDADOS_PROF
#include <stdio.h>
#define TAM 40
#define QTPROF 2


void dados_prof(char prof[][TAM], char materia[][TAM]/*, int QTPROF*/){

  int i=0;
  while(i<QTPROF){
    printf("\nDigite o nome dos professores:\n");
    scanf("%s", prof[i]);
    printf("\nAgora a materia que aplica:\n");
    scanf("%s", materia[i]);
    i++;
  }

  // for(int t=0; t<QTPROF; t++){
  //   printf("\n%s\n", prof[t]);
  // }

  // printf("%s", prof[0]);
  // printf("%s", prof[1]);
}





// -----------------------------------------------------------------------------MAIN

#include <stdio.h>
/* #include "mostramenu.h"
#include "createdata.h"
#include "readdata.h"
#include "updatedata.h"
#include "deletedata.h" */

#define TAM 40
#define QTPROF 2

int main(void) {
  int opcao;
  opcao=0;

  char aluno[TAM], idade[TAM];
  char curso[TAM], periodo[TAM];
  char turno[TAM], matricula[TAM];
  char sala[TAM];
  char prof[QTPROF][TAM], materia[TAM];

  while( opcao != 5){
    
    //chamar funcao menu
    mostraMenu();
    //escolher a opcao do menu
    scanf("%i", &opcao);
    
    switch ( opcao ){

      // chamar funcao para incluir dados (C)
      case 1 :
        createData(aluno/*, idade*/, curso/*, periodo*/, matricula/*, sala, turno*/, prof, materia/*, QTPROF*/);
      break;
      
      // chamar funcao para pesquisar (R)
      case 2:
        readData(aluno/*, idade*/, curso/*, periodo*/, matricula/*, sala, turno*/, prof, materia/*, QTPROF*/);
      break;

      // chamar funcao paar atualizar dados (U)
      case 3:
        updateData();
      break;

      // chamar funcao para deletar dados (D)
      case 4:
        deleteData();
      break;

      // termino da aplicacao
      case 5:  
        printf("\n Fim. Obrigado por utilizar nosso APP");
      break;
      
      default :
        printf("\n Opcao Invalida\n");
    }
  }
  return 0;
}