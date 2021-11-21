#include <stdio.h>

int main ()
{
	float montant = 10000.00;
	int plus, moin, choix;
	
	
	
	 
	 printf("/**** entre le choix ****/\n\n\n");
	 printf("1. deposer \n");
	 printf("2. retrait \n");
	  scanf("%d", &choix);
	  
	  switch (choix){
	  	case 1 :
	  		printf("depot");
	  		printf("entre plus :\n");
	 scanf("%d", &plus);
	 
	 montant = montant + plus;
	 
	 printf("afficher la esultat : %.2f ", montant);
	  		
	  		break;
	  	case 2 :
	  		printf("retrait");
	  		
	  		printf("entre moin : \n");
	 scanf("%d", &moin);
	 
	 montant = montant - moin;
	 
	 printf("afficher la esultat : %.2f ", montant);
	  		break;
	  	default :
	  		printf("exi");
	  		
	  }
	  
	 
	 		
	 
	 
	 
	 return 0;
	 
}
