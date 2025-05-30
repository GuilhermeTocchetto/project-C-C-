#include<iostream>
using namespace std;
#include<locale.h>
#include<conio.h>

main(){					// C++

setlocale(LC_ALL, "portuguese");

	int val;
	float med, s=0, c=0;
	system("color 1F"); //muda a cor da letra e do fundo
	
	
	cout<<"\t\t somar e calcular a media de uma sequencias de valores\n\n";
	cout<<"digite os valores inteiros, até que -99 seja digitado:\n";
	
	do
	{
		cin>>val;		// cin>>val; ==>  scanf("%f",&val)
		if(val!=-99)
		{
			c++;
			s+=val;
		}
		}while(val!=-99);
		
		med=s/c;
		system("cls");system("color 1F");
			
			cout<<"\n\n\n A soma de sequencia de valores é:"<<s<<"\n";
			cout<<"\n\n\n A media dos valores lidos é:"<<med<<"\n";
			system("pause");
			
		
	}

