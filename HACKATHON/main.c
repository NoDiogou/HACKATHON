#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int Verifica(char usur[20], char sen[20]){
	int verii=0;
	
	if(strcmp(usur,"admin\n") == 0 && strcmp(sen,"admin\n") == 0){
		verii = 1;
	}
	if(strcmp(usur,"secretaria\n") == 0 && strcmp(sen,"labsschool\n") == 0){
		verii = 2;
	}
	return verii;
}

int main(int argc, char *argv[]) {

	setlocale(LC_ALL, "Portuguese");
	
	char usuario[20],senha[20];
	int veri=0,menu,aux=0,turmaNum,turmEscolhe,cont,loginmenu=1;
	int resposta=1,escolha,decisao,linha,coluna;
	float soma=0, nota;
	float media1[10],media2[10],media3[10],media4[10],media5[10];
	char turma1[10][50],turma2[10][50],turma3[10][50],turma4[10][50],turma5[10][50],turmas[5][50];
	
	
//LOGIN
	do{
	system("cls");	

	printf("**** MENU DE LOGIN ****\n");
	printf("Informe seu usuario: ");
	fgets(usuario,20,stdin);
	fflush(stdin);
	
	printf("Informe sua senha: ");
	fgets(senha,20,stdin);
	fflush(stdin);
	
	veri = Verifica(usuario,senha);
	system("cls");	
//ADMIN
	if(veri==1){
		do{
			printf("USER: ADMIN\n");
			printf("1 - Cadastrar Turmas\n");
			printf("2 - Cadastrar Alunos\n");
			printf("3 - Visualizar Turmas e alunos\n");
			printf("4 - Sair\n");
			printf("--> ");
			scanf("%d",&menu);
			fflush(stdin);
			
			switch(menu){
			case 1:
				printf("Escolha um curso:\n");
				printf("1 - %s\n",turmas[1]);
				printf("2 - %s\n",turmas[2]);
				printf("3 - %s\n",turmas[3]);
				printf("4 - %s\n",turmas[4]);
				printf("5 - %s\n",turmas[5]);
				printf("--> ");
				scanf("%d",&turmEscolhe);
				fflush(stdin);
			
				if(turmEscolhe == 1){	
					printf("Informe o nome da turma: ");
					fgets(turmas[1],50,stdin);
					fflush(stdin);		
				}
				
				if(turmEscolhe == 2){	
					printf("Informe o nome da turma: ");
					fgets(turmas[2],50,stdin);
					fflush(stdin);		
				}
				
				if(turmEscolhe == 3){
					
					printf("Informe o nome da turma: ");
					fgets(turmas[3],50,stdin);
					fflush(stdin);
						
				}
				
				if(turmEscolhe == 4){
					printf("Informe o nome da turma: ");
					fgets(turmas[4],50,stdin);
					fflush(stdin);		
				}
				
				if(turmEscolhe == 5){
					
					printf("Informe o nome da turma: ");
					fgets(turmas[5],50,stdin);
					fflush(stdin);
						
				}
				break;
				
			case 2:
				printf("Escolha um curso:\n");
				printf("1 - %s\n",turmas[1]);
				printf("2 - %s\n",turmas[2]);
				printf("3 - %s\n",turmas[3]);
				printf("4 - %s\n",turmas[4]);
				printf("5 - %s\n",turmas[5]);
				printf("--> ");
				scanf("%d",&turmEscolhe);
				fflush(stdin);
				
				if(turmEscolhe == 1){
				 	for(cont=0;cont<10;cont++){
				 		printf("Digite o nome do aluno: ");
				 		fgets(turma1[cont],50,stdin);
				 		fflush(stdin);
					}	
				}
				if(turmEscolhe == 2){	
			     	for(cont=0;cont<10;cont++){
				 		printf("Digite o nome do aluno: ");
				 		fgets(turma2[cont],50,stdin);
				 		fflush(stdin);
				 	}
				}
				if(turmEscolhe == 3){
				 	for(cont=0;cont<10;cont++){
				 		printf("Digite o nome do aluno: ");
				 		fgets(turma3[cont],50,stdin);
				 		fflush(stdin);
					}	
				}
				if(turmEscolhe == 4){
				 	for(cont=0;cont<10;cont++){
				 		printf("Digite o nome do aluno: ");
				 		fgets(turma4[cont],50,stdin);
				 		fflush(stdin);
				 	}	
				}
				if(turmEscolhe == 5){
				 	for(cont=0;cont<10;cont++){
				 		printf("Digite o nome do aluno: ");
				 		fgets(turma5[cont],50,stdin);
				 		fflush(stdin);
				 	}	
				}
			break;
					
			case 3:
				printf("Escolha um curso:\n");
				printf("1 - %s\n",turmas[1]);
				printf("2 - %s\n",turmas[2]);
				printf("3 - %s\n",turmas[3]);
				printf("4 - %s\n",turmas[4]);
				printf("5 - %s\n",turmas[5]);
				printf("--> ");
				scanf("%d",&turmEscolhe);
				fflush(stdin);
				
				if(turmEscolhe == 1){
				 	for(cont=0;cont<10;cont++){
				 		printf("%s\n",turma1[cont]);
				  	}
			    }
			    
				if(turmEscolhe == 2){	
			    	for(cont=0;cont<10;cont++){
				 		printf("%s\n",turma2[cont]);
					}
				}
				
				if(turmEscolhe == 3){	
			    	for(cont=0;cont<10;cont++){
				 		printf("%s\n",turma3[cont]);
				 	}
				}
				
				if(turmEscolhe == 4){	
			    	for(cont=0;cont<10;cont++){
				 		printf("%s\n",turma4[cont]);
					}
				}
				
				if(turmEscolhe == 5){	
			    	for(cont=0;cont<10;cont++){
				 		printf("%s\n",turma5[cont]);
				 	}
				}		
			break;
			
			case 4:
			aux = 1;
			break;
			
			default:
				printf("ERRO");
			break;	
			}	
		}while(aux!=1);
	}
//SECRETARIA
	if(veri==2){
	do{
	printf("USER: SECRETARIA\n");
	printf("REGISTRO ESCOLAR\n");
	printf("1 - CADASTRAR NOTAS;\n");
	printf("2 - RELÁTORIO GERAL;\n");
	printf("3 - SAIR\n");
	printf("--> ");
    scanf("%d",&resposta);
    fflush(stdin);
    switch(resposta){
    
	case 1:
    	
    		printf("Escolha um curso:\n");
			printf("1 - %s\n",turmas[1]);
			printf("2 - %s\n",turmas[2]);
			printf("3 - %s\n",turmas[3]);
			printf("4 - %s\n",turmas[4]);
			printf("5 - %s\n",turmas[5]);
    		printf("--> ");
    		scanf("%d",&escolha);
    		fflush(stdin);
    		
    		if (escolha==1){
    			for (coluna=0;coluna<=10;coluna++){
    				printf("NOTAS DO ALUNO: \n");
    				for (linha=0;linha<3;linha++){
    					printf("Digite a %dº nota: ",linha+1);
    					scanf("%f",&nota);
    					fflush(stdin);
    					soma=soma+nota;
    					media1[coluna]=soma/3;
    				}
   		 		}	
    		}
    		
    		
			if (escolha==2){
    			for (coluna=0;coluna<=10;coluna++){
    				for (linha=0;linha<3;linha++){
    					printf("Digite a %dº nota: ",linha+1);
    					scanf("%f",&nota);
    					fflush(stdin);
    					soma=soma+nota;
    					media2[coluna]=soma/3;
					}
				}
			}
				
			if (escolha==3){
				for (coluna=0;coluna<=10;coluna++){
    			     	for (linha=0;linha<3;linha++){
    		     	 	printf("Digite a %dº nota: ",linha+1);
    					scanf("%f",&nota);
    					fflush(stdin);
    					soma=soma+nota;
    					media3[coluna]=soma/3;
					}
				}
			}
    			
	        if (escolha==4){
	        	for (coluna=0;coluna<=10;coluna++){
    				for (linha=0;linha<3;linha++){
    					printf("Digite a %d º nota: ",linha+1);
    					scanf("%f",&nota);
    					fflush(stdin);
    					soma=soma+nota;
    					media4[coluna]=soma/3;
					}
				}
			}
    		
			if (escolha==5){
				for (coluna=0;coluna<=10;coluna++){
    				for ( linha=0;linha<3;linha++){
    					printf("Digite a %dº nota: ",linha+1);
    					scanf("%f",&nota);
    					fflush(stdin);
    					soma=soma+nota;
    					media5[coluna]=soma/3;
					}
				}
			}
			
    		break;
    	case 2:
    		do{
    
    	printf("Escolha um curso:\n");
		printf("1 - %s\n",turmas[1]);
		printf("2 - %s\n",turmas[2]);
		printf("3 - %s\n",turmas[3]);
		printf("4 - %s\n",turmas[4]);
		printf("5 - %s\n",turmas[5]);
    	printf("--> ");
    	scanf("%d",&decisao);
    	fflush(stdin);
    		
    	if(decisao==1){
    		soma = 0;
    		for(cont = 0;cont<11;cont++){
    		 	printf("Aluno: %s media: %.2f\n",turma1[cont],media1[cont]/10);
    		 	soma = soma+media1[cont];
    		}
    		printf("Media da turma: %f\n",soma/10);
		}
		if(decisao==2){
			soma = 0;
			for(cont = 0;cont<11;cont++){
    			printf("Aluno: %s media: %.2f\n",turma2[cont],media2[cont]/10);
    			soma = soma+media2[cont];
    		}
    			printf("Media da turma: %f\n",soma/10);
		}
		if(decisao==3){
			soma = 0;
			for(cont = 0;cont<11;cont++){
    		 	printf("Aluno: %s media: %.2f\n",turma3[cont],media3[cont]/10);
    		 	soma = soma+media3[cont];
    		}
    		printf("Media da turma: %f\n",soma/10);
		}
		if(decisao==4){
			soma = 0;
			for(cont = 0;cont<11;cont++){
    		 	printf("Aluno: %s media: %.2f\n",turma4[cont],media4[cont]/10);
    		 	soma = soma+media4[cont];
    		}
    			printf("Media da turma: %f",soma/10);
		}
		if(decisao==5){
			soma = 0;
			for(cont = 0;cont<11;cont++){
    		 	printf("Aluno: %s media: %.2f\n",turma5[cont],media5[cont]/10);
    		 	soma = soma+media5[cont];
    		}
    			printf("Media da turma: %f\n",soma/10);
		}
    		system("pause");
			}while(decisao!=0);
		break;
			
    	case 3:
		    resposta = 0;
		break;

		default:
			printf("ERRO");
		break; 
		   	
			}
	  	}while(resposta!=0);			
	}
	}while(aux!=0);
}

