#include <stdio.h>
#include <locale.h>


//Guilherme Tocchetto e Jo�o Victor


int main()
{
    setlocale(LC_ALL, "portuguese");

    int combustivel;
    float total, preco, litros;
    char op;

    do {
        do {
            printf("Digite o tipo de combust�vel que deseja completar:\n");
            printf("1 - �lcool\n2 - Gasolina\n");
            scanf("%d", &combustivel);
        } while (combustivel < 1 || combustivel > 2);

        printf("Qual a quantidade de litros que deseja colocar:\n");
        printf("At� 20 litros, o � desconto de 3 por cem\n");
        printf("Acima de 20 litros, o desconto � de 5 por cem\n");
        scanf("%f", &litros);

        if (combustivel == 1) {
           
           printf("digite o preco do alcool\n");
           scanf("%f",&preco);
            if (litros <= 20) {
                total = litros * preco * 0.97;
            } else {
                total = litros * preco * 0.95;
            }
            printf("O combustivel ultilizado foi o �lcool e gastou R$ %.2f\n", total);
            printf("Pre�o do combustivel:%.2f\n",preco);
        } else {
            printf("digite o preco da gasolina\n");
           scanf("%f",&preco);
            if (litros <= 20) {
                total = litros * preco * 0.97;
            } else {
                total = litros * preco * 0.95;
            }
            printf("O combustivel ultilizado foi a gasolina e gastou R$ %.2f\n", total);
            printf("Pre�o do combustivel:%.2f\n",preco);
        }

        printf("Digite 'x' para novo c�lculo: ");
        scanf("%c", &op);
    } while (op == 'x' );
    
    system("pause");
    return 0;
}
