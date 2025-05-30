#include<STDIO.H>

main()
{
	int a,m,d,t;
	
	char op;
	
	do
{

	printf("\t\tescreva sua idaden\n\n");
	
	printf("escreva sua idade em anos:");
	scanf("%d",&a);
	printf("escreva sua idade em meses:");
	scanf("%d",&m);
	printf("escreva sua idade em dias");
	scanf("%d",&d);
	
	t=(a*365)+(m*30)+d;
	
	printf("sua idade em dias:%f",t);
	
	printf("escreva x para voltar o calculo:");
	scanf("%d",&op);
	

	
}while(op=='x');
}
