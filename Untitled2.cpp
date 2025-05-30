#include<iostream>
using namespace std;
#include<locale.h>
#include<conio.h>

main (){
	
	int x[20], i, p, y, flag, q;
	float s=0, m;
	
do{
	cout<<"quantos valores vc deseja digitar(maximo):";
	cin>>q;
}while(q>20);



	cout<<"digite uma lista com "<<q<<" para calcular a média\n\n";
	
	for(i =0; i<q; i++)
	{
		cin>>x[i];
	}
	
	system("cls");
	
	cout<<"\n\n lista de valores";
	
	for(i =0; i<q; i++)
	{
		s+=x[i];
		cout<<x[i]<<" ";
	}
	
	m= s/q;
	
	cout<<"\n média dos valores = "<<m<<"\n\n";
	
	cout<<"deseja verificar o valor de qual posição da lista: ";
	cin>>p;
	
	cout<<"o valor escolhido da posicao"<<p<< "é o valor"<<x[p-1];
	flag=-1;
	
	cout<<"qual número deseja encontrar na lista: ";
	cin>>y;
	
	for(i=0; i<q; i++)
	{
		if(y==x[i])
		{	
			flag=i;
			i=19;
		}
	
	}
	if (flag!=-1) cout<<"O valor"<<y<<"se encontra na posição"<<flag+1<<"/n";
	
	else cout<<"O valor nao se encontra na lista\n\n";
	system("pause");
	
}
