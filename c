 int main(){
    
   int qtdmaca;
   float total;
   printf("quantas maças fora compradas:");
   scanf("%d", & qtdmaca);
    if (qtdmaca <12){
        total = qtdmaca *0.3;
        
    }else {
        total = qtdmaca * 0.25;
    }
    printf("voce comprou %d e o total da compra foi de R$%.2f.",qtdmaca,total);    
    }
