#include <stdio.h>
#include <string.h>
#include "calc.h"

void position(char *str1, char *str2) {
    char *pos = strpbrk ( str2, str1); //функция из стандарт библ которая ищет первый из str2 в str1
    if (pos!=NULL){
        printf("%d",strchr(str1,*pos)-str1); //выводим индекс найденного элемента
    }
    else{
        printf("%d",-1);
    }

}

int main() {
/*    char str1[100], str2[100];
    printf("Input string 1:\n");
    scanf("%s", str1);
    printf("Input string 2:\n");
    scanf("%s", str2);

    position(str1,str2);
*/

//---------------------------------------------------------------------------------------------------

    char expression[MAX_SIZE];
    printf("Enter an expression (promt: use s for sin and c for cos) : \n");
    fgets(expression, MAX_SIZE, stdin); // cчитываем строку с выражением

    float result = evaluate_expression(expression);
    printf("Result: %f\n", result);


    return 0;
}