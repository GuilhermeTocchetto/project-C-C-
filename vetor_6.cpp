#include<iostream>
using namespace std;
#include<locale.h>
#include<conio.h>

main(){
	
	char nome[10][30];
	int data_n[10], id[10], i, n, at;
	float med, s=0;
	
	cout<<"\t\tcalcula idade\n\n";
	
	do
	{
		cout<<"Quantas pessoas serao inseridas (max 10)";
		cin>>n;
	}while(n>10);{
		cout<<"Digite o ano atual: ";
		cin>>at;
	}
	
	for(i = 0; i < n; i++){
		
		fflush(stdin);
		
		cout<<"Digite o nome da " <<i+1<< "º pessoa: ";
		gets(nome[i]);
		
		cout<<"Digite o ano de nascimento "<<nome[i]<<"\n";
		cin>>data_n[i];
		
		id[i] = at - data_n[i];
		s+= id[i];
	}
	system("cls");
	med=s/n;
	for(i = 0; i < n; i++)
	{
		cout<<"nasceu em "<<data_n[i]<<" e tem "<<id[i]<<" anos\n";
	}
	cout<<"\n\n A media das idades ="<<med<<"\n\n";
	system("pause");
}