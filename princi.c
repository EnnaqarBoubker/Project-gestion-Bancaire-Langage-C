#include<stdio.h>

struct compte {
	
	char nom [20];
	char prenom [20];
	char cin [20];
	float montant [20];
};

void introduir (struct compte seule)
{
	printf("donner le Nom : ");
	 scanf("%s", &seule.nom);
	printf("donner le Prenom : ");
	 scanf("%s", &seule.prenom);
	printf("donner CIN : ");
	 scanf("%s", &seule.cin);
	printf("donner le Montant : ");
	 scanf("%f", &seule.montant);
}

void InPscomte (struct compte plus)
{
	int C /*les nombre de comte*/, i;
	
	for(i = 1; i <= C; i++)
	{
	printf("donner le Nom : ");
	 scanf("%s", &plus.nom);
	printf("donner le Prenom : ");
	 scanf("%s", &plus.prenom);
	printf("donner CIN : ");
	 scanf("%s", &plus.cin);
	printf("donner le Montant : ");
	 scanf("%f", &plus.montant);
   }
   
    FILE *point;
 	 point = fopen("name.txt", "w");
    fclose(point);
}
 /*void file (struct compte fille)
 {
 	
 	
 }*/

int main()
{
	struct compte cost;
	struct compte Plcost;
	
	introduir (cost);
	
	InPscomte (Plcost);
	
	
	
	
	
	return 0;
	
}











