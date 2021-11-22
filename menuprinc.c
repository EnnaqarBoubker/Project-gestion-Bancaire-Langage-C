#include<stdio.h>
#include<windows.h>

struct compte {
	
	char nom [20];
	char prenom [20];
	char cin [20];
	float montant [20];
};


void menu(){
	int choix;
	
	system("cls");
		printf("\t\t\t\tMenu :  \n \n \n");
		printf("\t\t\t\t1. Introduire un compte bancaire\n");
		printf("\t\t\t\t2. Introduire plusieurs comptes bancaires \n");
		printf("\t\t\t\t3. Opérations \n");
		printf("\t\t\t\t4. Affichage \n"); 
		printf("\t\t\t\t5. Fidélisation \n");
		
		printf("\t\t\t\t0. Quitter \n");
		
		printf("\t\t\t\tentre un choix : ");
		scanf("%d", &choix);
		
		system("cls");
		
		switch (choix){
			case 1 : 
			   introduir();
			   
			    break;
			case 2 :
			   InPscomte();
				break;
			case 3 : 
			    operation();
			    break;
			case 4 : 
			    break;
			case 5 : 
			    break;
			default:
			    printf("le choix n'est pas valide !!!'");
		}
	

}

//*********************************************

void introduir ()
{
	struct compte seule;
	int chois;
	
	printf("\t\t\t\tIntroduire un compte bancaire \n\n");
	
	printf("\t\t\t\t\tdonner le Nom : ");
	 scanf("%s", &seule.nom);
	printf("\t\t\t\t\tdonner le Prenom : ");
	 scanf("%s", &seule.prenom);
	printf("\t\t\t\t\tdonner CIN : ");
	 scanf("%s", &seule.cin);
	printf("\t\t\t\t\tdonner le Montant : ");
	 scanf("%f", &seule.montant);
	 
	printf("\t\t\t\t\tCompte ets cree !!\n\n\n");
	
	printf("\t\t\t 1 .pour retoure la menu  ");
	printf("2 .pour sortie de programme ");
			scanf("%d", &chois);
			
			
	system("cls");
			
	switch(chois){
		case 1 :
			menu();
			break;
		case 2 :
			
			break;
		default : 
		    printf("this page not valid");
}system("cls");

}

//*********************************************
void InPscomte ()
{
	struct compte plus;
	int C /*les nombre de comte*/, i;
	
	system("cls");
	
	printf("\t\t\ttapper le nomber des compte : ");
	 scanf("%d", &C);
	
	
	for(i = 1; i <= C; i++)
	{
	printf("\t\t\tdonner le Nom : ");
	 scanf("%s", &plus.nom);
	printf("\t\t\tdonner le Prenom : ");
	 scanf("%s", &plus.prenom);
	printf("\t\t\tdonner CIN : ");
	 scanf("%s", &plus.cin);
	printf("\t\t\tdonner le Montant : ");
	 scanf("%f", &plus.montant);
   }
   
   printf("\t\t\tles opération reussie \n\n ");
}

 //************************************************
 
 void operation()
{
	struct compte opera;
	
	int plus, moin, chois;
	
	
	 printf("/**** entre le choix ****/\n\n\n");
	 printf("1. deposer \n");
	 printf("2. retrait \n");
	  scanf("%d", &chois);
	  
	  switch (chois){
	  	
	  	case 1 :
	  		
	  		printf("entre plus :\n");
	        scanf("%d", &plus);
	        printf("la esultat : %d %d", opera.montant + plus);
	  		break;
	  		
	  	case 2 :
	  		
	  		printf("entre moin : \n");
	        scanf("%d", &moin);
	        
	             if (opera.montant >= moin){
                     printf("la esultat : %d %d", opera.montant - moin);
				 }
	             else{
	             	 printf("operation imposible !!");
				 }
	                 
	  		break;
	  	default :
	  		printf("exit");
	  		
	  }
}
 
 
 /*void exist (){
 
 int chois;
 
    printf("\t\t\t 1 .pour retoure la menu  ");
	printf("2 .pour sortie de programme ");
			scanf("%d", &chois);
			
			system("cls");
			
	switch(chois){
		case 1 :
			menu();
			break;
		case 2 :
			
			break;
		default : 
		    printf("this page not valid");
	}
 
 }*/
int main()
{
	menu();
	
	return 0;
	
}











