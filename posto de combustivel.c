#include <stdio.h>
#include <locale.h>


//Guilherme Tocchetto e João Victor


int main()
{
    setlocale(LC_ALL, "portuguese");

    int combustivel;
    float total, preco, litros;
    char op;

    do {
        do {
            printf("Digite o tipo de combustível que deseja completar:\n");
            printf("1 - Álcool\n2 - Gasolina\n");
            scanf("%d", &combustivel);
        } while (combustivel < 1 || combustivel > 2);

        printf("Qual a quantidade de litros que deseja colocar:\n");
        printf("Até 20 litros, o é desconto de 3 por cem\n");
        printf("Acima de 20 litros, o desconto é de 5 por cem\n");
        scanf("%f", &litros);

        if (combustivel == 1) {
           
           printf("digite o preco do alcool\n");
           scanf("%f",&preco);
            if (litros <= 20) {
                total = litros * preco * 0.97;
            } else {
                total = litros * preco * 0.95;
            }
            printf("O combustivel ultilizado foi o Álcool e gastou R$ %.2f\n", total);
            printf("Preço do combustivel:%.2f\n",preco);
        } else {
            printf("digite o preco da gasolina\n");
           scanf("%f",&preco);
            if (litros <= 20) {
                total = litros * preco * 0.97;
            } else {
                total = litros * preco * 0.95;
            }
            printf("O combustivel ultilizado foi a gasolina e gastou R$ %.2f\n", total);
            printf("Preço do combustivel:%.2f\n",preco);
        }

        printf("Digite 'x' para novo cálculo: ");
        scanf("%c", &op);
    } while (op == 'x' );
    
    system("pause");
    return 0;
}
