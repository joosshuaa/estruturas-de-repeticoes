#include <stdio.h>
#include <stdlib.h>
/*Altere o programa anterior para que ele não permita a entrada de valores negativos.*/
int main(){
    int num; 
    int maior;
    int menor;
    do{
    printf("Digite 20 numeros aleatorios: ");
    scanf("%d",&num);
    if((num>=maior)&&(num>=menor)){
        maior=num;
    }else{
        if((num<maior)&&(num<menor)){
            menor=num;
        }
    }
}while(num<=19 && num!=0);
printf("O numero maior eh: %d",maior);
printf("\nO numero menor eh: %d",menor);
    return 0;
}