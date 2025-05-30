 #include <stdio.h>
 
 main() 
 {
	 
 	float sl,pr,ns,r;
 	
 	printf("escreva seu salario:");
 	scanf("%f", &sl);
 	printf("porcentual do aumento:");
 	scanf("%f", &pr);
 	r=pr/100;
 	ns=r*sl+sl;
 	printf("seu novo salario é %f",ns);
 	system("pause");
 }
