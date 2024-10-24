#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1()
{
    printf("Erik Nascimento Siqueira!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2()
{
    printf("30*27 = %d\n ", 30*27);
}
//3.Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3()
{
    float media = (5+8+12)/3.0;
    printf("A média aritmética entre os números 5, 8, 12 é igual a %.1f\n", media);
}

//4. Faça um programa que leia e imprima um número inteiro.

void q4()
{
   int num=0;
   printf("\nDigite um numero inteiro:");
   scanf("%d", &num);
   printf("O numero digitado foi: %d\n", num);
}

//5. Faça um programa que leia dois números reais e os imprima.

void q5()
{
   float num1,num2;
   printf("Informe um numero: ");
   scanf("%f",&num1);
   printf("Informe outro numero: ");
   scanf("%f",&num2);
   printf("Os Numeros reais informados foram: %1.f e %1.f", num1, num2);
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.

void q6()
{
   int num;
   printf("Digite um numero: ");
   scanf("%d",&num);
   printf("O antecessor desse número é %d e o sucessor é %d", num-1, num+1);
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.

void q7()
{
   char nome[250],fone[15],end[200];
   
   printf("Informe o seu nome completo: ");
   scanf("%s",nome);
   printf("Informe o seu telefone: ");
   scanf("%s",fone);
   printf("Informe o seu Endereço completo:");
   scanf("%s",end);
   
   printf("\nDados informados - \nNome:%s, \nTelefone: %s, \nEnderenco: %s",nome,fone,end);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

void q8()
{
   int num1,num2,res;
   printf("Digite um numero: ");
   scanf("%d",&num1);
   printf("Digite mais um numero: ");
   scanf("%d",&num2);
   res = num1-num2;
   printf("A subtração desses números é:%d", res);
}

//9. Faça um programa que leia um número real e imprima ¼ deste número.

void q9()
{
   float num,res;
   printf("Digite um numero: ");
   scanf("%f",&num);
   res = num/4;
   printf("A quarta parte desse número e:%f", res);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q10()
{
   float num1,num2,num3,media;
   printf("Digite um numero: ");
   scanf("%f",&num1);
   printf("Digite um numero: ");
   scanf("%f",&num2);
   printf("Digite um numero: ");
   scanf("%f",&num3);
   media=(num1+num2+num3)/3.0;
   printf("A média aritmética dos números informados é:%f", media);
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

void q11()
{
   float num1,num2,som,sub,dv,mult;
   printf("Digite um numero: ");
   scanf("%f",&num1);
   printf("Digite um numero: ");
   scanf("%f",&num2);

   printf("\nO resultado da soma é: %2.f", som=num1+num2);
   printf("\nO resultado da subtração é: %2.f", sub=num1-num2);
   printf("\nO resultado da divisão é: %f",dv=num1/num2);
   printf("\nO resultado da multiplicação é: %2.f", mult=num1*num2);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q12()
{
   float num1,res;
   printf("Digite um numero: ");
   scanf("%f",&num1);
   
   res = num1 * num1;

   printf("O quadrado do número informado é:%2.f:", res);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

void q13()
{
   float saldo=0, nvsaldo=0;
   printf("Informe o valor do saldo da sua conta para o cálculo: ");
   scanf("%f",&saldo);

   nvsaldo=saldo*1.02;
   printf("Seu novo saldo calculado será de :%2.f:", nvsaldo);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).


void q14()
{
   float base,alt,per,area;
   printf("Informe o valor,em metros, do comprimento da base para o cálculo: ");
   scanf("%f",&base);
   
   printf("Informe o valor,em metros, da altura para o cálculo: ");
   scanf("%f",&alt);

   per=(base*base)+(alt*alt);
   area=base*alt;
   printf("O perímetro desse retângulo é:%2.f", per);
   printf("A area dele é de:%2.f:", area);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

void q15()
{
   float preco,desc,vdesc,nvpreco;

   printf("Qual é valor do produto: ");
   scanf("%f",&preco);
   printf("Digite quantos porcento de desconto a ser aplicado nessa compra: ");
   scanf("%f",&desc);

  vdesc=preco*(desc/100);
  nvpreco=preco-vdesc; 
   printf("\nO valor do desconto é de :%2.f:", vdesc);
   printf("\nO valor do produto com desconto é de :%2.f:", nvpreco);

}

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.


void q16()
{
   float salario,ajuste,nvsalario;

   printf("Informe o valor do salário atual: ");
   scanf("%f",&salario);
   printf("Digite quantos % será  reajustado o salário: ");
   scanf("%f",&ajuste);

  nvsalario=salario+salario*(ajuste/100); 
   printf("O valor do novo salário será de :%2.f:", nvsalario);
}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

void q17()
{
   float tempc,tempf;

   printf("Informe a temperatura em Graus centigrados: ");
   scanf("%f",&tempc);

   tempf = (9*tempc+160)/5.0;

   printf (" A temperatura em Fahrenheit é %2.f",tempf);
}

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

void q17()
{
   float qtdlt,dist,tempo,vmedia;

   printf("Informe o tempo(em horas) de duração da viajem:" );
   scanf ("%f", &tempo);
   printf("Informe a velocidade média do carro durante a viajem:" );
   scanf ("%f", &vmedia);

   dist=tempo*vmedia;
   qtdlt=dist/12;
   printf("A distância percorrida foi de %2.f:", dist);
   printf("O consumo total de combustível durante a viagen foide %2.f:", qtdlt);
   
}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

void q19()
{
   float valorvenc,tx_juros,t_atraso, valor_juros,parc_atual;

   printf("Digite o valor da prestacao vencida: ");
   scanf("%f", &valorvenc);
   printf("Informe a taxa de juros: ");
   scanf("%f", &tx_juros);
   printf("Qual o tempo de atraso das parcelas: ");
   scanf("%f", &t_atraso);

   valor_juros = valorvenc * (tx_juros/100) * t_atraso;
   parc_atual = valorvenc+valor_juros;
   
   printf(" O valor da prestacao: %2f \n", valorvenc);

   printf("Periodo de atraso: %2f \n", t_atraso);
   printf("Juros a ser cobrados: %2f \n", valor_juros);
   printf("Valor da prestacao com juros: %.2f", parc_atual);
}

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

void q20()
{
   float dolar,cotacao,real;

   printf("Informe a quantia  em dólares para a conversão: ");
   scanf("%f",&dolar);
   printf("Informe a cotação  atual do dolar: ");
   scanf("%f",&cotacao);

   real= dolar*cotacao;

   printf("O valor em reais é :%2.f", real);
}

int main() {
    q1();
    return EXIT_SUCCESS;
}
