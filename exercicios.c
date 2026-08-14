#include <stdio.h>
#include <math.h>
int main() {
int op;
    
void exercicio01()
{
    float n1, n2, media;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    media = (n1 * 2 + n2 * 3) / 5;
    printf("A nota 1 = %.2f, a nota 2 = %.2f e a média ponderada = %.2f\n", n1, n2, media);
}
void exercicio02()
{
    float salario, vendas, comissao, salario_final;
    printf("Digite o salario fixo: ");
    scanf("%f", &salario);
    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.04;
    salario_final = salario + comissao;

    printf("O salario fixo = %.2f, o valor das vendas = %.2f, a comissão = %.2f e o salario final = %f\n", salario, vendas, comissao, salario_final);
}
void exercicio03()
{
    float peso, engordar, emagrecer;
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    engordar = peso + (peso * 0.15);
    emagrecer = peso - (peso * 0.20);
    printf("Seu peso = %f, o peso se engordar = %f e o peso se emagrecer = %f\n", peso, engordar, emagrecer);
}
void exercicio04()
{
    float base_maior, base_menor, altura, area;

    printf("Digite a base maior: ");
    scanf("%f", &base_maior);

    printf("Digite a base menor: ");
    scanf("%f", &base_menor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;
    printf("A base maior = %f, a base menor = %f, a altura = %f e a área do trapézio = %f\n", base_maior, base_menor, altura, area);
}
void exercicio05()
{
    int ano_nascimento, ano_atual, idade, meses, semanas, dias;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;
    meses = idade * 12;
    semanas = idade * 52;
    dias = idade * 365;

    printf("Ano de nascimento = %d, ano atual = %d, idade = %d anos, %d meses, %d semanas e %d dias\n", ano_nascimento, ano_atual, idade, meses, semanas, dias);
}
void exercicio06()
{
    int fatias, pizza, sobra;

    printf("Digite quantas fatias foram consumidas: ");
    scanf("%d", &fatias);

    pizza = fatias / 8;
    sobra = fatias % 8;
    
    printf("Foram consumidas = %d fatias, teve %d pizza(s) e sobrou %d",fatias, pizza, sobra);
    
}
void exercicio07()
{
    float fahrenheit, celcius;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32) / 1.8;

    printf("A temperatura em fahrenheit = %.2f°F, para celsius = %.2f°C", fahrenheit, celcius);
}
void exercicio08()
{
    float area, comprimento, raio;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = 3.14159 * raio * raio;
    comprimento = 2 * 3.14159 * raio;

    printf("Com o raio de %f, a area deu = %f e o comprimento da circuferência deu = %f", raio, area, comprimento);
}
void exercicio09()
{
    float tensao, resistencia, resistor;

    printf("Digite o valor da tensão: ");
    scanf("%f", &tensao);

    printf("Digite o valor da resistência: ");
    scanf("%f", &resistencia);

    resistor = tensao / resistencia;

    printf("A tensão = %f, a resistência = %f, calcularam numa corrente elétrica de = %f", tensao, resistencia, resistor);
}
void exercicio10()
{
   float catetoA, catetoB, hipotenusa;
   
   printf("Digite o valor do cateto A do triângulo retângulo: ");
   scanf("%f", &catetoA);

   printf("Digite o valor do cateto B: ");
   scanf("%f", &catetoB);

   hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

   printf("O valor do cateto A = %f e o valor de cateto B = %f, obteve uma hipotenusa de = %f", catetoA, catetoB, hipotenusa);
}
void exercicio11()
{
    float dimensao1, dimensao2, area, iluminacao;

    printf("Digite a dimensão 1 do cômodo em metros: ");
    scanf("%f", &dimensao1);

    printf("Digite a dimensão 2 do cômodo em metros: ");
    scanf("%f", &dimensao2);

    area = dimensao1 * dimensao2;
    iluminacao = area * 18;

    printf("Com a dimensão 1 sendo de = %f e a dimensão 2 sendo de = %f, a área do cômodo é = %f m² e a iluminação necessário seria = %f W ", dimensao1, dimensao2, area, iluminacao);
}
void exercicio12()
{
    float angulo1, angulo2, angulo3;

    printf("Digite o valor do ângulo 1 do triângulo: ");
    scanf("%f", &angulo1);

    printf("DIgite o valor do ângulo 2 do triângulo: ");
    scanf("%f", &angulo2);

    angulo3 = 180 - angulo1 - angulo2;

    printf("O terceiro ângulo é = %f°", angulo3);
}
void exercicio13()
{
    int n, d;

    printf("Digite o números de lados N do polígono: ");
    scanf("%d", &n);

    d = n *(n - 3) / 2;

    printf("Com o total de lados %d, o número de diagonais do polígono é de = %d", n, d);
}
void exercicio14()
{
    float raio, altura, volume;

    printf("Digite o raio da lata: ");
    scanf("%f", &raio);

    printf("Digite a altura da lata: ");
    scanf("%f", &altura);

    volume = 3.14159 * pow(raio, 2) * altura;

    printf("Com o raio de = %f e a altura de = %f, o volume da lata é de = %f", raio, altura, volume);
}
void exercicio15()
{
    int hora, minuto, convertidomin, totalmin, totalsegs;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite o minuto: ");
    scanf("%d", &minuto);

    convertidomin = hora * 60;
    totalmin = convertidomin + minuto;
    totalsegs = totalmin * 60;

    printf("A hora convertida em minutos = %d, o total de minutos = %d, o total em segundos = %d", convertidomin, totalmin, totalsegs);
}
void exercicio16()
{
    int alfa, beta, gama, valor;

    printf("Digite o valor de alfa: ");
    scanf("%d", &alfa);

    printf("Digite o valor de beta: ");
    scanf("%d", &beta);

    printf("Digite o valor de gama: ");
    scanf("%d", &gama);

    printf("Os valores: alfa = %d, beta = %d e gama = %d\n", alfa, beta, gama);

    valor = alfa;
    alfa = beta;
    beta = gama;
    gama = valor;

    printf("Valores trocados: alfa = %d, beta = %d e gama = %d\n", alfa, beta, gama);
}
void exercicio17()
{
  float n1, n2, n3, n4, media;
  
  printf("Digite a nota 1: ");
  scanf("%f", &n1);

  printf("Digite a nota 2: ");
  scanf("%f", &n2);

  printf("Digite a nota 3: ");
  scanf("%f", &n3);

  printf("Digite a nota 4: ");
  scanf("%f", &n4);

  media = (((n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4)) / 10);

  printf("A média final ficou = %f", media);
}
void exercicio18()
{
    float tempo, velocidade, distancia, consumo;

    printf("Digite o tempo de viagem: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    consumo = distancia / 12;

    printf("Com o tempo de = %f e a velocidade média de = %f, a distância fica = %f e o consumo de litros é de = %f",tempo, velocidade, distancia, consumo);
}
void exercicio19()
{
    float salario, conta1, conta2, restante;

    printf("Olá João! Digite o seu salário: ");
    scanf("%f", &salario);

    printf("Digite o valor da conta 1: ");
    scanf("%f", &conta1);

    printf("Digite o valor da conta 2: ");
    scanf("%f", &conta2);

    conta1 = conta1 + (conta1 * 0.02);
    conta2 = conta2 + (conta2 * 0.02);

    restante = salario - (conta1 + conta2);

    printf("O seu salario = %f, o valor das conta com a multa de 2%: conta 1 = %f, conta 2 %f, restará do seu salário = R$ %.2f", salario, conta1, conta2, restante);
}
void exercicio20()
{
    float res1, res2, serie, parelelo;

    printf("Digite a resistência 1: ");
    scanf("%f", &res1);

    printf("Digite a resistência 2: ");
    scanf("%f", &res2);

    serie = res1 + res2;
    parelelo = (res1 * res2) / (res1 + res2);

    printf("A resistência 1 = %f, a resistência 2 = %f, a resistência em série = %f e a resistência em paralelo = %f", res1, res2, serie, parelelo);
}

do {
printf("\nLista 01\n");
printf("\nEscolha o número do exercício: ");
scanf("%d", &op);
switch (op) {
case 1: exercicio01(); break;
case 2: exercicio02(); break;
case 3: exercicio03(); break;
case 4: exercicio04(); break;
case 5: exercicio05(); break;
case 6: exercicio06(); break;
case 7: exercicio07(); break;
case 8: exercicio08(); break;
case 9: exercicio09(); break;
case 10: exercicio10(); break;
case 11: exercicio11(); break;
case 12: exercicio12(); break;
case 13: exercicio13(); break;
case 14: exercicio14(); break;
case 15: exercicio15(); break;
case 16: exercicio16(); break;
case 17: exercicio17(); break;
case 18: exercicio18(); break;
case 19: exercicio19(); break;
case 20: exercicio20(); break;
}
} while (op != 0);
return 0;
}
