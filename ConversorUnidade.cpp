#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void Hect(float Uni);
void Decquad(float Uni);
void Acre(float Uni);
void Deciquad(float Uni);
void Nanoquad(float Uni);

int main() {

  int op;
  float Valor;
  char resposta;

  setlocale(LC_ALL, "portuguese");

  do {
    printf("===========Menu de Conversão===========\n");
    printf(" 1-Hectare \n"
           " 2-Acre\n"
           " 3-Decimetro Quadrado\n"
           " 4-Nanometro Quadrado\n"
           " 5-Decametro Quadrado\n"
           " escolha a forma de conversão:\n"
		   "=======================================");
		   printf("\n->");
            scanf("%d", &op);
        
 system("cls");
 	  
	   
	   
   switch (op) {

    case 1:
      printf("\nDigite o valor a ser convertido:\n");
      printf("->");
      scanf("%f", &Valor);
      
      system("cls");
      
      Hect(Valor);
      break;
    case 2:
      printf("Digite o valor a ser convertido:\n");
      printf("->");
      scanf("%f", &Valor);
      
      system("cls");
      
      Acre(Valor);
      break;
    case 3:
      printf("Digite o valor a ser convertido:\n");
      printf("->");
      scanf("%f", &Valor);
      
      system("cls");
      
      Deciquad(Valor);
      break;
	 case 4:
	  printf("Digite o valor a ser convertido:\n");
	  printf("->");
      scanf("%f", &Valor);
      
      system("cls");
      
      Nanoquad(Valor);
      break;
	case 5:
	  printf("Digite o valor a ser convertido:\n");
	  printf("->");
      scanf("%f", &Valor);
      
      system("cls");
      
      Decquad(Valor);
      break;
	  default:
	  printf("por favor digite uma operação valida\n\n");
	  	
    }
	printf("Deseja fazer outra operação? [S]/[N]");
	  scanf("%s",& resposta);
  } while (resposta == 'S' || resposta == 's');
}

 void Hect(float Uni){
  float Valor = 0;
  int op;
  printf("\n\n=======================================\n");
  printf("Escolha uma das opções:\n");
  printf("1 - Hectare para Acre\n"
       "2 - Hectare para Decimetro Quadrado\n"
       "3 - Hectare para Nanometro Quadrado\n"
       "4 - Hectare para Decametro Quadrado\n"
	   "=======================================\n");
	   printf("->");
	   
  scanf("%i", &op);
 
  system("cls");
 
	switch(op){
		case 1:	
			 printf("\n============================================\n");
    		 printf("\n%.2f Hectare equivale a %f Acre\n", Uni, (Uni * 2.4710538146717)); 
		     printf("\n============================================\n");
		  break;
		case 2:
	    	 printf("\n============================================\n");
			 printf("\n%.2f Hectare equivale a %f Decimetro Quadrado\n", Uni, (Uni * 1.000000)); 
			 printf("\n============================================\n");
		  break;
		case 3:
			 printf("\n============================================\n");
			 printf("\n%.2f Hectare equivale a %f Nanometro quadrado\n", Uni, (Uni * 10.000000000000000000000)); 
			 printf("\n============================================\n");
		  break;	
		case 4:
			 printf("\n============================================\n");
			 printf("\n%.2f Hectare equivale a %f Decametro Quadrado\n", Uni, (Uni * 100)); 
			 printf("\n============================================\n");
		  break;
	}
}
 void Acre(float Uni){
 	float valor = 0;
 	int op;
 	
 	printf("\n\n=======================================\n");
 	printf("Escolha uma das opções:\n");
 	printf( " 1 - Acre para Hectare\n"
            " 2 - Acre para Decimetro Quadrado\n"
            " 3 - Acre para Nanometro Quadrado\n"
            " 4 - Acre para Decametro Quadrado\n"
			"=======================================\n");
    scanf("%i", &op);     
	
	system("cls");
 
	switch(op){
		case 1:	
			 printf("\n============================================\n");
    		 printf("\n%.2f Acre equivale a %f Hectare\n", Uni, (Uni * 0.40468564224)); 
		     printf("\n============================================\n");
		  break;
		case 2:
	    	 printf("\n============================================\n");
			 printf("\n%.2f Acre equivale a %f Decimetro Quadrado\n", Uni, (Uni * 404685.64224)); 
			 printf("\n============================================\n");
		  break;
		case 3:
			 printf("\n============================================\n");
			 printf("\n%.2f Acre equivale a %.10f Nanometro quadrado\n", Uni, (Uni * 4.0468564224)); 
			 printf("\n============================================\n");
		  break;	
		case 4:
			 printf("\n============================================\n");
			 printf("\n%.2f Acre equivale a %f Decametro Quadrado\n", Uni, (Uni * 40.468564224)); 
			 printf("\n============================================\n");
		  break; 
 	
   }
}
  void Deciquad(float Uni){
 	float valor = 0;
 	int op;
 	
 	printf("\n\n=======================================\n");
 	printf("Escolha uma das opções:\n");
 	printf( " 1 - Decimetro Quadrado para Hectare\n"
            " 2 - Decimetro Quadrado para Acre\n"
            " 3 - Decimetro Quadrado para Nanometro Quadrado\n"
            " 4 - Decimetro Quadrado para Decametro Quadrado\n"
			"=======================================\n");
    scanf("%i", &op);     
	
	system("cls");
 
	switch(op){
		case 1:	
			 printf("\n============================================\n");
    		 printf("\n%.2f Decimetro Quadrado equivale a %f Hectare\n", Uni, (Uni * 0.000001)); 
		     printf("\n============================================\n");
		  break;
		case 2:
	    	 printf("\n============================================\n");
			 printf("\n%.2f Decimetro Quadrado equivale a %.16f Acre\n", Uni, (Uni * 0.0000024710538146717)); 
			 printf("\n============================================\n");
		  break;
		case 3:
			 printf("\n============================================\n");
			 printf("\n%.2f Decimetro Quadrado equivale a %.10f Nanometro quadrado\n", Uni, (Uni * 10.000000000000000)); 
			 printf("\n============================================\n");
		  break;	
		case 4:
			 printf("\n============================================\n");
			 printf("\n%.2f Decimetro Quadrado equivale a %f Decametro Quadrado\n", Uni, (Uni * 0.0001)); 
			 printf("\n============================================\n");
		  break; 
 	
   }
}
 void Nanoquad(float Uni){
 	float valor = 0;
 	int op;
 	
    printf("\n\n=======================================\n");	
 	printf("Escolha uma das opções:\n");
 	printf( " 1 - Nanometro quadrado para Hectare\n"
            " 2 - Nanometro quadrado para Acre\n"
            " 3 - Nanometro quadrado para Decimetro Quadrado\n"
            " 4 - Nanometro quadrado para Decametro Quadrado\n"
			"=======================================\n");
    scanf("%i", &op);     
	
	system("cls");
 
	switch(op){
		case 1:	
			 printf("\n============================================\n");
    		 printf("\n%.2f Nanometro Quadrado equivale a %.23f Hectare\n", Uni, (Uni * 0.0000000000000000000001)); 
		     printf("\n============================================\n");
		  break;
		case 2:
	    	 printf("\n============================================\n");
			 printf("\n%.2f Nanometro Quadrado equivale a %.35f Acre\n", Uni, (Uni * 0.00000000000000000000024710538146717)); 
			 printf("\n============================================\n");
		  break;
		case 3:
			 printf("\n============================================\n");
			 printf("\n%.2f Nanometro Quadrado equivale a %.17f Decimetro quadrado\n", Uni, (Uni * 0.0000000000000001)); 
			 printf("\n============================================\n");
		  break;	
		case 4:
			 printf("\n============================================\n");
			 printf("\n%.2f Nanometro Quadrado equivale a %.21f Decametro Quadrado\n", Uni, (Uni * 0.00000000000000000001)); 
			 printf("\n============================================\n");
		  break; 
 	
   }
}
 void Decquad(float Uni){
 	float valor = 0;
 	int op;
 	
    printf("\n\n=======================================\n");	
 	printf("Escolha uma das opções:\n");
 	printf( " 1 - Decametro Quadrado para Hectare\n"
            " 2 - Decametro Quadrado para Acre\n"
            " 3 - Decametro Quadrado para Decimetro Quadrado\n"
            " 4 - Decametro Quadrado para Nanometro Quadrado\n"
			"=======================================\n");
    scanf("%i", &op);     
	
	system("cls");
 
	switch(op){
		case 1:	
			 printf("\n============================================\n");
    		 printf("\n%.2f Decametro Quadrado equivale a %.2f Hectare\n", Uni, (Uni * 0.01)); 
		     printf("\n============================================\n");
		  break;
		case 2:
	    	 printf("\n============================================\n");
			 printf("\n%.2f Decametro Quadrado equivale a %.17f Acre\n", Uni, (Uni * 0.024710538146717)); 
			 printf("\n============================================\n");
		  break;
		case 3:
			 printf("\n============================================\n");
			 printf("\n%.2f Decametro Quadrado equivale a %.3f Decimetro quadrado\n", Uni, (Uni * 10.000)); 
			 printf("\n============================================\n");
		  break;	
		case 4:
			 printf("\n============================================\n");
			 printf("\n%.2f Decametro Quadrado equivale a %.20f Nanometro Quadrado\n", Uni, (Uni * 100.000000000000000000)); 
			 printf("\n============================================\n");
		  break; 
 	
   }
}
 
 
 
 
  
