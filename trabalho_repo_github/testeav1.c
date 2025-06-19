//Uma loja está fazendo uma promoção com a seguinte regra: para cada x unidades de um produto compradas, o cliente paga o preço normal por essas unidades e pode comprar outras y unidades pela metade  preço. O objetivoé calcular o valor total de uma compra com base na quantidade de unidades adquiridas e nos valores de x e y.
#include <stdio.h>
float calculaValor(int numunidade,float preunidade){
   return numunidade * preunidade;
}
int quantasPeloPrecoPromocional(int ntotalcompradas, int xnormal,int ymetade){
    return (ntotalcompradas % (xnormal + ymetade));
}
void calculaExibeValorCompraTotal(int totalcompr,float preuni,int x ,int y){
    int totalcompra , valormetade, totalpromo;
    valormetade = quantasPeloPrecoPromocional(totalcompr ,x,y);
    totalcompra = calculaValor(totalcompr - valormetade, preuni); 
    totalpromo = calculaValor(valormetade, preuni / 2); 
    printf("\n %d unidades no preço normal: %d \n",totalcompr - valormetade, totalcompra );
    printf("\n %d unidades no preço promocional: %d\n ", valormetade, totalpromo);
    printf("\n Valor total da compra:%d \n", totalcompra + totalpromo);

}
int main(){ 
    int totalunidadescompradas, preconormal, precometade;
    float precounidades;
     printf("\nDigite o número total de unidades compradas:\n");
     scanf("%d", &totalunidadescompradas);
     printf("Digite o preço de uma unidade:");
      scanf("%f", &precounidades);
    printf("Digite o valor de unidades pelo preço normal:");
    scanf("%d", &preconormal);
     printf("Digite o valor de unidades pela metade do preço:");
     scanf("%d", &precometade);
     calculaExibeValorCompraTotal(totalunidadescompradas, precounidades, preconormal , precometade);


    return 0;
}