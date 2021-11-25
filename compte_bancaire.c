#include<stdio.h>

struct compte {
	char nom [20]; 
	char prenom [20];
	char cin [20];
	float montant;
};

struct compte search[1000];
int nbrClt = 0;


//#############################################

void ajouter()
{
	system("cls");  //clears the output screen
	
	printf("\t\t\t\tAjouter un seule compte bancaire \n\n");
	
	printf("\n\t\t\t\t\tdonner le Nom.........: ");
	 scanf("%s", search[nbrClt].nom );
	printf("\n\t\t\t\t\tdonner le Prenom......: ");
	 scanf("%s", search[nbrClt].prenom);
	printf("\n\t\t\t\t\tdonner CIN............: ");
	 scanf("%s", search[nbrClt].cin);
	printf("\n\t\t\t\t\tdonner le Montant.....: ");
	 scanf("%f", &search[nbrClt].montant);
	
	printf("\n\t\t\t\tNom : %s | Prenom : %s | CIN : %s | Montant : %f\n",search[nbrClt].nom, search[nbrClt].prenom, search[nbrClt].cin, search[nbrClt].montant );
	 
	printf("\n\t\t\t\t\tCompte est creez !!\n\n\n");
	
   nbrClt++;
}

//#############################################


void InPscompte()
{
	int C /*les nombre de comPte*/, i;
	
	system("cls");
	
	printf("\n\n\t\t\t\tAjouter plusieur Compte\n\n");
	printf("\t\t\ttapper le nomber des compte : ");
	 scanf("%d", &C);
	
	
	for(i = 0; i < C; i++)
    	{
    	printf("\n\t\t\t\t\tdonner le Nom.........: ");
		 scanf("%s", search[nbrClt].nom );
		printf("\n\t\t\t\t\tdonner le Prenom......: ");
		 scanf("%s", search[nbrClt].prenom);
		printf("\n\t\t\t\t\tdonner CIN............: ");
		 scanf("%s", search[nbrClt].cin);
		printf("\n\t\t\t\t\tdonner le Montant.....: ");
		 scanf("%f", &search[nbrClt].montant);
	
		printf("\n\t\t\t\t\tNom : %s | Prenom : %s | CIN : %s | Montant : %f \n",search[nbrClt].nom, search[nbrClt].prenom, search[nbrClt].cin, search[nbrClt].montant );
	
		 nbrClt++;
       }
   
   printf("\n\t\t\t\t\tles operation reussie \n\n ");
   
   
}

//#############################################

void operations()
{
	int choix;
	char rech [10];
	int i;
	float DR;
	
	printf("donner moi votre CIN ");
	 scanf("%s", rech);
	 
	    for (i = 0; i < nbrClt ; i++){
		
	     	if ( strcmp (rech, search[i].cin) == 0)
			  {
		
	        	printf("\n\t\t\t\tAfficher compte : %s \t %s \t %s \t %f\n\n", search[i].nom,search[i].prenom,search[i].cin,search[i].montant);
	     	
	     		printf("\t\t\t\tdonner le choix:\n\n ");
				printf("\t\t\t\t1. Depos\n");
				printf("\t\t\t\t2. Retrait\n\t\t\t\t\t");
				scanf("%d", &choix);
	     		printf("\t\t\t\tDonner un montant: \t");
				scanf("%f", &DR);
			
				switch(choix)
				{
					case 1 :
				
					    search[i].montant += DR;
				   		printf("\n\n\t\t\t\tla nouvelle montant est : %.2f\n\n\n", search[i].montant);
				    	break;
				    	
			   		 case 2 :
			   		 	
			    		if (search[i].montant >= DR){
				
			    	   		 search[i].montant -= DR;
			    	   		 printf("\t\t\t\tla nouvelle montant est : %.2f\n", search[i].montant);	
						}
					    else{
					
				         	printf("\t\t\t\tl operation null,Le montant est supérieur\n ");
			    			break;
			    	}
			    	
		    	}

    	   }
			
        }
}	




void acs()
{
        struct compte v;
        int i , k ;
        
        	for(i = 0;i <nbrClt; i++)
	       {
		         for(k = i+1; k < nbrClt; k++)
	         	{
	         		if(search[i].montant > search[k].montant)
	     	    	{
		     	    	v = search[i];
		     	    	
		    	    	search[i] = search[k];
		    	    	
		    	     	search[k] = v;
		        	}
		       }
        	}	
	

	for(i=0; i < nbrClt ;i++){
            printf("l'affichage par Ascendant : %s    %s    %s    %f \n\n ",search[i].nom,search[i].prenom,search[i].cin,search[i].montant);
        }
    }
    
void des()
{
             struct compte v;
        int i , k ;
        
        	for(i = 0; i < nbrClt; i++)
	       {
		         for(k = i+1; k < nbrClt; k++)
	         	{
	         		if(search[i].montant < search[k].montant)
	     	    	{
		     	    	v = search[i];
		     	    	
		    	    	search[i] = search[k];
		    	    	
		    	     	search[k] = v;
		        	}
		       }
        	}	
	

	for(i=0; i < nbrClt ;i++){
            printf("\t\t\t\tl'affichage par Ascendant : %s    %s    %s    %f \n\n ",search[i].nom,search[i].prenom,search[i].cin,search[i].montant);
        }
    }
    
    void queen()
{
	char rech [10];
	int i;
	
	
	printf("\t\t\t\tdonner moi la CIN ");
	 scanf("%s", rech);
	 
	    for (i = 0; i < nbrClt ; i++){
		
	     	if ( strcmp (rech, search[i].cin) == 0)
			  {
		
	        	printf("\t\t\t\tafficher compte : %s \t %s \t %s \t %f\n", search[i].nom,search[i].prenom,search[i].cin,search[i].montant);
	        	
			 }	 
		}		 
}
	
	
//############################################# Pour return de la menu;

 
  void exist(){
 
 int choiX;
 
    printf("\t\t\t 1 .pour retoure la menu  ");
	printf("2 .pour sortie de programme ");
			scanf("%d", &choiX);
			
			system("cls");//CLEAR
			
	switch(choiX){
		case 1 :
		    main();
			break;
			
		default : 
		    printf("\t\t\t\tthis page not valid");
	}
 
 }
 
 //#############################################  Menu principal 
 
 void menu(){
	int choix, i, chois;
	
	    printf("\n\n\t\t\t\t\t#######################################\n");
	    printf("\t\t\t\t\t######### App Compte Bancaire #########\n");
	    printf("\t\t\t\t\t#######################################\n\n\n");
	
		printf("\t\t\t\t1. Introduire un compte bancaire.....................: \n\n\n\n");
		printf("\t\t\t\t2. Introduire plusieurs comptes bancaires............: \n\n\n\n");
		printf("\t\t\t\t3. Operations........................................: \n\n\n\n");
		printf("\t\t\t\t4. Affichage.........................................: \n\n\n\n"); 
		
		printf("\t\t\t\t0. Quitter...........................................: \n\n\n\n");
		
		printf("\t\t\t\tentre le choix : ");
		scanf("%d", &choix);
		
	system("cls"); //clear screen
		
		switch(choix){
			case 1 :
				ajouter();
				exist();
				break;
			case 2 :
				InPscompte();
		        exist();
				break;
			case 3 :
				operations();		
				exist();
			case 4 :
			    printf("\t\t\t\tdonner votre choix :\n");
				printf("\t\t\t\t1 . Order par ascendant \n");
				printf("\t\t\t\t2 . Order par descendant \n");
				printf("\t\t\t\t3 . Recherche par CIN \n\t\t\t\t");
	 			 scanf("%d", &chois);
	 			 
	 			 switch (chois){
 			 	case 1 :
	 			 		acs();
						break;
	 			case 2 :
	 			 		des();
	 			 		break;
	 			case 3 :
	 				   queen();
	 				   break;
				  }
			    exist();
			
			default :
				printf("\n\n\t\t\t\tQuitter programme");
		}
	
}
 
 
 
 int main()
{ 
	menu();
	
	return 0;
	
}
