#include<iostream>
using namespace std;
#include<locale.h>
#include<conio.h>

main(){
	
	int tamanho[20];
	float r;
	
	cout<<"\t\tDigite 20 valores positivos ou negativos\n";
	
	for(int i = 0; i<20; i++)
	{
		cout<<"digite o valor aqui: ";
		cin>>tamanho[i];
		
}
cout<<"\tRESULTADO\n\n";
	for(int i=0;i<20;i++){
		
		if(tamanho[i]>0){
			cout<<"valor "<<i+1<<" em dobro : "<<tamanho[i] * 2<<"\n";
		}else{
		
			cout<<"valor "<<i+1<<" positivo : " << -tamanho[i]<<"\n";
		}
	}
return 0;
}