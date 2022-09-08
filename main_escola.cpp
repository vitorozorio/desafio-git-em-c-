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

int main(int argc, char** argv) {
//variaveis 
int nota1,nota2,media,mediaf;
int opcao,login,senha,turma;
char professor[30]= ("vitor");
char aluno [30]= ("caio");
char nome [30];	
// variaveis

// iremis tentar algo novo com uma estrutura de repeticao

do{
	printf ("****************seja bem vindo a escola maos que movem o manha****************");
	printf ("\n\nescolha uma opcao");
	printf ("\n1 se sou aluno\n2 se sou professor\n");
	scanf ("%d",&opcao);
}  while ((opcao<1) && (opcao>2));

// aqui entraremos com os outros dados usando switch case

switch (opcao) {
	// login e senha do aluno
	case 1:
	printf ("\nola, seja bem vindo a nossa escola");
	printf ("\ninsira seu login:");
	scanf ("%d",&login);
	printf ("\ninsira sua senha:");
	scanf ("%d", &senha);
    if ((login==44) && (senha==333)){	
    	printf ("\nvamos la %s",aluno);
    	printf ("\nsua media foi 10");
	} 
	break; 
	// login e senha do professor
	case 2:
	printf ("\ninsira seu login e senha");
	printf ("\ninsira seu login:");
	scanf ("%d",&login);
	printf ("\ninsira sua senha:");
	scanf ("%d", &senha);
    if ((login==22) && (senha==2002)){	
    	printf ("\nvamos la professor %s",professor);
    	printf ("\nescolha sua opcao");
    	printf ("\n1 para calcular media\n2 para cadastrar um novo aluno\n");
    	scanf ("%d",&opcao);
    	switch (opcao) {
    		// aqui calculamos a media 
    		case 1:
    			printf ("\nentre com as notas");
    			printf ("\nnota 1:");
    			scanf ("%d",&nota1);
    			printf ("\nnota 2:");
    			scanf ("%d",&nota2);
    			media = (nota1 + nota2); 
    			mediaf = media/2;
    			if (mediaf >= 7) {
    				printf("\nMedia do aluno = %d ",mediaf);
    				printf ("\no aluno esta aprovado");
				} else {
					printf("\nMedia do aluno = %d ",mediaf);
					printf ("\no aluno esta reprovado");
				}
    			
    		break; 
			// aqui nos cadastramos um novo aluno
			case 2:
				printf ("\ninsira os dados do aluno\n");
				printf ("nome:");
				scanf ("%s", &nome);
				printf ("\nturma:");
				scanf ("%d", &turma);
				printf ("o'a aluno'a %s",nome);
				printf (" faz parte da turma ");
				printf ("%d",turma);
			break; 	
		}
	} 
	break;
	
}    /*tive algumas dificuldades em relação a grande diferença entre a sintax do portugol e da linguagem c. 
       A logica tambem tem uma grande diferença, porem com a tentativa e erro e com a ajuda dos material da 
	   faculdade, da internet e dos meus livros fui capaz de superar as dificuldades.**************/
	
	return 0;
}
