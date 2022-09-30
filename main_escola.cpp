#include <iostream>
/* estou dando inicio a um novo desafio. nesse novo projeto eu irei criar uma nova versão
do desafio git "escola mãos que movem o amanhã". o codigo sera inteiramente baseado em sua versão inicial escrita
em portugol studio.  */

/*dev zori na área*/
/*$$$$$$$$$$$$$$$*/
/*$$$$$$$$$$$$$$$*/
/*$$$$$$$$$$$$$$$*/
/*$$$$$$$$$$$$$$$*/
/*$$$$$$$$$$$$$$$*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float calculo_media () {
	float nota1, nota2, nota3, nota4, media;
	printf ("\n--------------------------------\n");
	printf ("insira as notas !!");
	printf ("\nnota1 :");
	scanf ("%f", &nota1 );
	printf ("\nnota2 :");
	scanf ("%f", &nota2 );
	printf ("\nnota3 :");
	scanf ("%f", &nota3 );
	printf ("\nnota4 :");
	scanf ("%f", &nota4 );
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf ("\nmedia final do aluno :%.2f", media );	
	printf ("\n--------------------------------\n");
	return media ;
}
int main(int argc, char** argv) {
//variaveis
	int opcao, login, senha, turma;
	char professor[30] = ("vitor");
	char aluno [30] = ("caio");
	char nome [30];
	bool verificador = false ;
// variaveis

do {
// inicio 	    
		printf ("****************seja bem vindo a escola maos que movem o manha****************");
		printf ("\n\nescolha uma opcao");
		printf ("\n1 se sou aluno\n2 se sou professor\n");
		scanf ("%d",&opcao);
     // aqui entraremos com os outros dados usando switch case
	 switch (opcao) {
        // login e senha do aluno
		case 1:
			printf ("\n--------------------------------\n");
			printf ("\nola, seja bem vindo a nossa escola");
			printf ("\ninsira seu login:");
			scanf ("%d", &login);
			printf ("insira sua senha:");
			scanf ("%d", &senha);
			if ((login == 44) && (senha == 333)) {
				printf ("\n--------------------------------\n");
				printf ("\nvamos la %s",aluno);
				printf ("\ndeseja calcular sua media ?");
				printf ("\n1 se sim \n2 se nao\n");
				scanf ("%d", &opcao);
				switch (opcao) {
					case 1:
					// função media
					calculo_media();
					break;
                    // fim do programa
					case 2:
					printf ("\nok!!!");
					break;
				}
			} 
			else {
				printf ("\n--------------------------------\n");
				printf ("ERRO!!!");
			}
		 break;
			// login e senha do professor
		 case 2:
			 printf ("\n--------------------------------\n");
			 printf ("\ninsira seu login e senha");
			 printf ("\ninsira seu login:");
			 scanf ("%d",&login);
			 printf ("insira sua senha:");
			 scanf ("%d", &senha);
			 if ((login == 22) && (senha == 2002)) {
				printf ("\n--------------------------------\n");
				printf ("\nvamos la professor %s",professor);
				printf ("\nescolha sua opcao");
				printf ("\n1 para calcular media\n2 para cadastrar um novo aluno\n");
				scanf ("%d",&opcao);
				switch (opcao) {
				// aqui calculamos a media
				case 1:
				// função media
				calculo_media();
				break;
				// aqui nos cadastramos um novo aluno
			    case 2:
			    printf ("\n--------------------------------\n");	
				printf ("\ninsira os dados do aluno\n");
				printf ("nome:");
				scanf ("%s", &nome);
				printf ("turma:");
				scanf ("%d", &turma);
				printf ("o'a aluno'a %s",nome);
				printf (" faz parte da turma ");
				printf ("%d",turma);
				break;
				}
			 }
			 else {
				printf ("\n--------------------------------\n");
		        printf ("ERRO!!!");
			 }
		 break;	  
		 }  //estrutura de retorno 
	      printf ("\n--------------------------------\n");
	      printf ("\ndeseja voltar 0 \ndeseja encerrar 1\n");
   	      printf ("\nescolha uma opcao :");
   	      scanf ("%d", &opcao);
   	      switch (opcao) {
   	      	
   		  case 0 :
   		  verificador = true;	
   		  break;	
   		
   		  case 1 :
   		  verificador = false;
		  printf ("\nprograma finalizado !!");   	
   		  break;	
	   }
   	}
 while (verificador);

	return 0;
}
