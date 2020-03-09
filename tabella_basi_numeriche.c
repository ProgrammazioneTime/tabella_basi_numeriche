#include <stdio.h>
#include <stdlib.h>

void convertitore(int val, int base);

main()
{
	int lim,i;
	do{
		printf("Inserisci il limite massimo: ");
		scanf("%d",&lim);
	}while(lim<1);
	
	system("cls");
	printf("Dec:\t\tBin:\t\tOtt:\t\tHex:\n");
	for(i=0 ; i<=lim ; i++)
	{
		printf("%d\t\t",i);
		convertitore(i,2);
		convertitore(i,8);
		convertitore(i,16);
		printf("\n");
	}
	printf("\n\n");
	system("pause");
}

void convertitore(int val, int base)
{
	int i,j,resto;
	char risultato[100];
	
	for(i=0 ; val>=base ; i++)
	{
		resto=val%base;
		if(resto>9)
		{
			risultato[i] = resto + 55;
		}
		else
		{
			risultato[i] = resto + 48;
		}
		val=val/base;
	}
	if(val>9)
	{
		risultato[i] = val + 55;
	}
	else
	{
		risultato[i] = val + 48;
	}
	
	for(j=0; i>=j ; i--)
	{
		printf("%c",risultato[i]);
	}
	printf("\t\t");
}


