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
   int num,res;
   printf("Digite um numero: ");
   scanf("%d",&num);
   res=num/4;
   printf("A quarta parte desse número e:%d:", res);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q10()
{
   float num1,num2,num3,med;
   printf("Digite um numero: ");
   scanf("%f",&num1);
   printf("Digite um numero: ");
   scanf("%f",&num2);
   printf("Digite um numero: ");
   scanf("%f",&num3);
   med = (nun1+num2+num3)/3.0
   printf("A média aritmética dos números informados é:%f:", med);
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

void q11()
{
   float num1,num2,som,sub,div,mult;
   printf("Digite um numero: ");
   scanf("%f",&num1);
   printf("Digite um numero: ");
   scanf("%f",&num2);

   som=num1+num2;
   sub=num1-num2;
   div=num1/num2;
   mult=num1*num2;  

   printf("\nSoma: %f", som);
   printf("\nSubtração: %f", sub);
   printf("\nDivisão: %f", div);
   printf("\nMultiplicação: %f", mult);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q12()
{
   float num1,res;
   printf("Digite um numero: ");
   scanf("%f",&num1);
   
   res = nun1 * num1;
   printf("O quadrado do número informado é:%f:", res);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

void q13()
{
   float saldo, nvsaldo;
   printf("Informe o valor do saldo da sua conta para o cálculo: ");
   scanf("%f",&saldo);

   nvsaldo: saldo * 1.02;
   printf("Seu novo saldo calculado será de :%f:", nvsaldo);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).


void q14()
{
   float bs,alt,per,a;
   printf("Informe o valor (em metros) do comprimento da base para o cálculo: ");
   scanf("%f",&bs);
   
   printf("Informe o valor (em metros) da altura para o cálculo: ");
   scanf("%f",&alt);

   per=(bs * bs)+(alt * alt);
   a=bs*alt;
   printf("O perímetro é de :%f:", per);
   printf("A area é de :%f:", a);

}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

void q15()
{
   float prec,desc,vdesc,nvprec;

   printf("Informe o valor do produto: ");
   scanf("%f",&prec);
   printf("Digite o desconto a ser aplicado na compra do produto: ");
   scanf("%f",&desc);

  vdesc=prec*(desc/100);
  nvprec=prec-vdesc; 
   printf("O valor do desconto é de :%f:", vdesc);
   printf(" O valor do produto com desconto é de :%f:", nvprec);

}

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.


void q16()
{
   float sal,aj,nvsal;

   printf("Informe o valor do salário atual: ");
   scanf("%f",&sal);
   printf("Digite quantos % será  reajustado o salário: ");
   scanf("%f",&aju);

  nvsal=sal+ sal*(aj/100); 
   printf("O valor do novo salário será de :%f:", nvsal);
}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

void q17()
{
   float gc,gf;

   printf("Informe a temperatura em Graus centigrados: ");
   scanf("%f",&gc);

   gf = (9*gc+160)/5;
   printf (" A temperatura em Fahrenheit:%f, gf);
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
   float qtdlt,dist,tempo,vmedia

   printf("Informe o tempo(em horas) de duração da viajem: );
   scanf ("%f", &tempo)
   printf("Informe a velocidade média do carro durante a viajem: );
   scanf ("%f", &vmedia):

   dist=tempo*vmedia;
   qtdlt=Dist/12;
   printf("A distância percorrida foi de %f:", dist)
   printf("O consumo total de combustível durante a viagen foide %2.f:", qtdlt)
}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

void q19()
{
   int p_atraso;
   float vl_venc, tx_j, j, nv_valor;

   printf("Digite o valor da prestacao vencida: ");
   scanf("%f", &vl_venc);
   printf("Informe a taxa de juros: ");
   scanf("%f", &tx_j);
   printf("Periodo de atraso: ");
   scanf("%d", &p_atraso);

   j=(v_venc * (tx_j /100) * p_atraso;
   nv_valor = v_venc +j;
   
   printf(" O valor da prestacao: %f \n", v_venc);
   printf("Periodo de atraso: %d \n", p_atraso);
   printf("Juros a ser cobrados: %f \n", j);
   printf("Valor da prestacao com juros: %.2f", nv_valor);
}

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

void q20()
{
   float dólar,cotacao,real;

   printf("Informe a quantia  em dólares para a conversão: ");
   scanf("%f",&dolar);
   printf("Informe a cotação  atual do dólar: ");
   scanf("%f",&cotacao);

   real= dólar*cotacao;

   printf("O valor em reais é %2.f:", real)

}

int main() {
    q5();
    return EXIT_SUCCESS;
}
