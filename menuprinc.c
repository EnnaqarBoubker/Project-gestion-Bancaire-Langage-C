
#include<stdio.h>

struct compte {//structure est un assemblage de variables qui peuvent avoir différents types;;
	char nom [20]; 
	char prenom [20];
	char cin [20];
	float montant [20];
};


void menu(){
	int choix;
	
	system("cls");
		printf("\t\t\t\t\tMenu :  \n \n \n");
		printf("\t\t\t\t1. Introduire un compte bancaire\n");
		printf("\t\t\t\t2. Introduire plusieurs comptes bancaires \n");
		printf("\t\t\t\t3. Opérations \n");
		printf("\t\t\t\t4. Affichage \n"); 
		printf("\t\t\t\t5. Fidélisation \n");
		
		printf("\t\t\t\t0. Quitter \n\n\n");
		
		printf("\t\t\t\tentre le choix : ");
		scanf("%d", &choix);
		
	system("cls"); //clear screen
		
		switch (choix){
			case 1 : 
			   introduir();
			   exist ();
			    break;
			case 2 :
			   InPscompte();
			   exist ();
				break;
			case 3 : 
			    operation();
			    exist ();
			    break;
			case 4 : 
			    break;
			case 5 : 
			    break;
			default:
			    printf("Quitter programme !!!!!");
			  
		}
	

}

//*********************************************

void introduir ()
{
	struct compte seule;
	
	printf("\t\t\t\tAjouter un seule compte bancaire \n\n");
	
	printf("\t\t\t\t\tdonner le Nom : ");
	 scanf("%s", &seule.nom);
	printf("\t\t\t\t\tdonner le Prenom : ");
	 scanf("%s", &seule.prenom);
	printf("\t\t\t\t\tdonner CIN : ");
	 scanf("%s", &seule.cin);
	printf("\t\t\t\t\tdonner le Montant : ");
	 scanf("%f", &seule.montant);
	
	 
	printf("\n\t\t\t\t\tCompte est creez !!\n\n\n");
	

}

//*********************************************
void InPscompte ()
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

	struct compte opera;
	
	int plus, moin, chois;
	int rest;
 //************************************************
 
 void operation()
{
	
	
	 printf("/**** entre le choix ****/\n\n\n");
	 
	 printf("1. deposer \n");
	 printf("2. retrait \n");
	  scanf("%d", &chois);
	  
	  switch (chois){
	  	
	  	case 1 :
	  		
	  		printf("entre plus :\n");
	        scanf("%d", &plus);
	        rest == opera.montant + plus;
	        printf("la resultat : %d  \n", rest);
	  		break;
	  		
	  	case 2 :
	  		
	  		printf("entre moin : \n");
	        scanf("%d", &moin);
	        
	             if (opera.montant >= moin){
                     printf("la esultat : %d %d \n", opera.montant - moin);
				 }
	             else{
	             	 printf("operation imposible !! \n");
				 }
	                 
	  		break;
	  	default :
	  		printf("exit \n");
	  		
	  }
	  
   
}
 
 
 void exist (){
 
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
 
 }
 
 
 /*void fichier()
 {
    FILE* fiche;

    fiche = fopen(".//fich.txt", "r+");
    if (fiche != NULL)
    {
    	
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    fprintf("")
    
    fclose (fiche);
}*/
 
 
 
 
int main()
{
	menu();
	
	return 0;
	
}


