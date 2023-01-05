#include <stdio.h>
#include <locale.h>

int main(){

    while(1){

    float num1, num2, respostauser;

    printf("Projeto 1: Calculadora \n");
    printf("Autora: Programadora Iniciante J%cssica Oliveira. \n\n", 130);

    printf(" Digite 1 para somar. \n Digite 2 para subtrair. \n Digite 3 para multiplicar. \n Digite 4 para dividir. \n");
    scanf("%f", &respostauser);

    printf("Digite o primeiro n%cmero: \n", 163); //asc
    scanf("%f", &num1);

    printf("Digite o segundo n%cmero: \n", 163); 
    scanf("%f", &num2);

    if (respostauser == 1){
        num1 = num1 + num2;
        printf("O resultado da soma %c: %f \n", 130, num1);
    }

    if (respostauser == 2){
        num1 = num1 - num2;
        printf("O resultado da subtra%c%co %c: %f \n", 135, 198, 130, num1);
    }

    if (respostauser == 3){
        num1 = num1 * num2;
        printf("O resultado da multiplica%c%co %c: %f \n", 135, 198, 130, num1);
    }

    if (respostauser == 4){
        num1 = num1 / num2;
        printf("O resultado da divis%co %c: %.2f \n", 198, 130, num1);
    }
        
    else{
        printf("Op%c%co inv%clida! \n", 135, 198, 160);
    }

    system("pause");

    }
    return 0;
}
