#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma(float n1,float n2,float res){
     res = n1 + n2;
    return(res);
}

float subt(float n1,float n2,float res){
    res = n1 - n2;
    return(res);
}

float divs(float n1,float n2,float res){
    res = n1 / n2;
    return(res);
}

float mult(float n1,float n2,float res){
    res = n1 * n2;
    return(res);
}

void calc(){
    setlocale(LC_ALL,"pt_BR_utf8");
    float n1,n2,res;
    char oper;
    int calc = 1;
    while(calc == 1){
        printf("Digite os valores que deseja calcular (ex:5 + 5):\n");
        scanf("%f", &n1);
        scanf(" %c",&oper);
        scanf("%f", &n2);
        switch(oper){
            case '+':
                res = soma(n1,n2,res);
                printf("O resultado é %.2f\n",res);
                break;
            case '-':
                res = subt(n1,n2,res);
                printf("O resultado é %.2f\n",res);
                break;
            case '*':
                res = mult(n1,n2,res);
                printf("O resultado é %.2f\n",res);
                break;
            case '/':
                if(n2 != 0){
                    res = divs(n1,n2,res);
                    printf("O resultado é %.2f\n",res);
                }else
                    printf("Nao existe divisao por 0\n");
                break;
            default:
                if(oper != '+','-','*','/');
                    printf("Operador invalido\n");
                break;
        }
        printf("Deseja fazer mais um cálculo? (1/2):\n");
        scanf("%i",&calc);
        system("cls");
    }

}

void menu(){
    setlocale(LC_ALL,"pt_BR_utf8");
    system("color a");
    printf("-+-+-+-+-+-+-+-+-\nCalculadora em C \nVer: 1.3 \nBy: CaetanoVl\n-+-+-+-+-+-+-+-+-\n");
    calc();
    system("pause");
}

int main(void){
    menu();
    return(0);
}
