#include <stdio.h>
#include <string.h>
#include "calc.h"

void position(char *str1, char *str2) {
    int pos = -1;
    for (int i = 0; str1[i] != '\0'; ++i){
        for (int j = 0; str2[j] != '\0'; ++j) {
            if (str1[i] == str2[j])
                    pos = i;
                    break;
        }
    }
    printf("position : %d", pos);

}

int main() {
   char str1[100], str2[100];
    printf("Input string 1:\n");
    scanf("%s", str1);
    printf("Input string 2:\n");
    scanf("%s", str2);
    position(str1,str2);


//---------------------------------------------------------------------------------------------------

    /*char expression[MAX_SIZE];
    printf("Enter an expression (promt: use s for sin and c for cos) : \n");
    fgets(expression, MAX_SIZE, stdin); // cчитываем строку с выражением

    float result = evaluate_expression(expression);
    printf("Result: %f\n", result); */


    return 0;
}