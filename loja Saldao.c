#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese");
	
	
	int parcela, quantidade, x1;
	float preco, nota, acresc, pago, desct;
	char produto[30],op;
	
	do{
	
	printf("escreva nome do pruduto desejado:");
	scanf("%s",&produto);
	printf("escreva o preco do produto:");
	scanf("%f",&preco);
	printf("escreva a quantidade do produto:");
	scanf("%d",&quantidade);
	
	
	do{
		
		printf("escolha a forma de pagamento\n");
		printf("1=a vista, com um desconto de 15%\n");
		printf("2=sem juros ate 5x(1 a 5)\n");
		printf("3=acima de 5 parcelas(6 a 10),(10% ascrecimo)\n");
		
		printf("digite a forma de pagar(1 ou 2 ou 3)");
		scanf("%d",&parcela);
		
	}while(parcela<1 || parcela>3);
	
	
		if(parcela==1)
		{
			
		nota=preco*quantidade;
		desct=nota*0.15;
		pago= nota-desct;
		 
	
		printf("O senhor comprou o produto %s, o valor final do pruduto foi %.2f",produto,pago);
	}
	else
	{
	if(parcela==2){
	
		do{
		printf("digite nº de parcelas(1 a 5):\n");
		scanf("%d",&x1);
		}while(x1<1 || x1>6);
	
			nota=preco*quantidade;
		 	pago=nota/x1;
		 	
		 	printf("O senhor comprou o produto %s, o valor final da compra foi %.2f, e pagara %.2f em %d parcelas",produto,nota,pago,x1);
		 }
		 
		
		
		
		else{
		
			
		 do{
		 	printf("digite quantas vezes quer parcelar(6 a 10):\n");
			scanf("%d",&x1);
			}while(x1<6 || x1>10);
			
			nota=preco*quantidade;
			
			pago=(nota*1.10)/x1;
			
			
			printf("O senhor comprou o produto %s, o valor final da compra foi %.2f, e pagara %.2f em %d parcelas",produto,nota,pago,x1);
			}	
	 }
	 
	 		printf("digite'x' para novo calculo:");
			scanf("%s",&op);
	}while(op=='x');
		
	
	


}
	
