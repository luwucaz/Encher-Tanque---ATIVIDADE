#include <stdio.h>

int main(void) {
  float largura, altura, profundidade, precoLitroAlcool, precoLitroGasolina;
  float porcentagemAlcool, porcentagemGasolina, valorFinalEmPorcentagem;
  float valorFinalAlcool, valorFinalGasolina;
  int resposta;

  printf("Qual a largura do tanque? ");
  scanf("%f", &largura);

  printf("Qual a altura do tanque? ");
  scanf("%f", &altura);

  printf("Qual a profundidade do tanque? ");
  scanf("%f", &profundidade);

  printf("Qual o preço por litro do Álcool? ");
  scanf("%f", &precoLitroAlcool);

  printf("Qual o preço por litro da Gasolina? ");
  scanf("%f", &precoLitroGasolina);

  printf("\nEscolha a opção: \n");
  printf("1: Usar porcentagens \n");
  printf("2: Não usar porcentagens \n");
  printf("\nInforme sua opção: ");
  scanf("%i", &resposta);

  if (resposta == 2) {
    valorFinalAlcool =
        precoLitroAlcool * largura * altura * profundidade * 1000;
    valorFinalGasolina =
        precoLitroGasolina * largura * altura * profundidade * 1000;

    printf("\nUsando as dimenções %.2f, %.2f, %.2f, o preço para encher com "
           "Alcool "
           "é %.2f e em Gasolina %.2f",
           largura, altura, profundidade, valorFinalAlcool, valorFinalGasolina);
  } else if (resposta == 1) {

    printf("Qual a porcentagem do Alcool (em porcentagem)? ");
    scanf("%f", &porcentagemAlcool);

    printf("Qual a porcentagem da Gasolina (em porcentagem)? ");
    scanf("%f", &porcentagemGasolina);

    valorFinalEmPorcentagem = (porcentagemAlcool / 100 * precoLitroAlcool +
                               porcentagemGasolina / 100 * precoLitroGasolina) *
                              largura * altura * profundidade * 1000;

    printf("\nUsando as dimenções %.2f, %.2f, %.2f, o preço final é %.2f",
           largura, altura, profundidade, valorFinalEmPorcentagem);
  } else {
    printf("Resposta inválida");
  };

  return 0;
};

