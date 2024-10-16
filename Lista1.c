#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1()
{
    printf("Erik Siqueira!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2()
{
    printf("30*27 = %d\n ", 30*27);
}
//3.ma Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3()
{
    float media = (5+8+12)/3.0;
    printf("A média aritmética entre os números 5, 8, 12 é igual a %.1f\n", media);
}
//4. Faça um programa que leia e imprima um número inteiro.
void q4()
{
   int num=0;
   printf("\nDigite um numero inteiro: ");
   scanf("%d", &num);
   printf("O numero digitado foi %d\n", num);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5()
{
   float n1,n2;
   printf("Informe um numero: ");
   scanf("%f",&n1);
   printf("Informe outro numero: ");
   scanf("%f",&n2);
   printf("Os Numeros reais informados foram: %f %f", n1, n2);
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.

void q6()
{
   int n;
   printf("Digite um numero: ");
   scanf("%d",&n);
   printf("O antecessor:%d e o sucessor %d são:" n-1, n+1);
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.

void q7()
{
   charnome[250],fone[15],end[200]
   printf("Informe o seu nome completo: ");
   scanf("%s",&nome);
   printf("Informe o seu telefone: ");
   scanf("%s",&fone);
   printf("Informe o seu Endereço completo: ");
   scanf("%s",&end);
   printf("\nDados informados - Nome:%s, Telefone: %s, Enderenco: %s",nome,fone,
end);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

void q8()
{
   int n1,n2,n3;
   printf("Digite um numero: ");
   scanf("%d",&n1);
   printf("Digite mais um numero: ");
   scanf("%d",&n2);
   n3=n1-n2;
   printf("A subtração desses números é:%d", n3);
}

//9. Faça um programa que leia um número real e imprima ¼ deste número.

void q9()
{
   int n,r;
   printf("Digite um numero: ");
   scanf("%d",&n);
   r=n/4
   printf("A quarta parte desse número e:%d:" r1);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q4();
    return EXIT_SUCCESS;
}
