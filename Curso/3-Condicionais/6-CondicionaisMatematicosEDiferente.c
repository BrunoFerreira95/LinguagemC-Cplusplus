#include <stdio.h>
//Funcao principal do programa
int main()
{

    //Definindo variaveis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    //Maior
    if(a>2){
        printf("\n %d eh maior que 2", a);
    }
    //Maior ou igual
    if(c >= b){
        printf("\n %d eh maior que %d", c, b);
    }

    //Menor
    if(a < 10){
        printf("\n %d eh menor que 10", a);
    }

    //Menor ou igual
    if(a <= 10){
        printf("\n %d eh menor ou igual a 10", a);
    }

    //Diferente
    if(c != 10){
        printf("\n %d nao eh 10", c);
    }
    if(d != 'a'){
        printf("\n %c nao eh a", d);
    }

    //fecha o programa
    return 0;
}


