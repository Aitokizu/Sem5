#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 100

float calculate(char operation, float num1, float num2) { // калькулятор
    switch (operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        case '%':
            return floor(num1 / num2);
        case '^':
            return pow(num1,num2);
        case 's':
            return sin(num2);
        case 'c':
            return cos(num2);
        default:
            return 0;
    }
}

float evaluate_expression(char *expression) { // функция, которая вычисляет результат выражения
    char operator = '+'; //по умолчанию, чтобы добавлять значения выражения
    float operand = 0;
    float result = 0;
    int length = strlen(expression);
    for (int i = 0; i < length; i++) { // проходим по выражению
        char current_char = expression[i];
        if (isdigit(current_char)) { // если символ цифра, добавляем его к текущему операнду(значение, с которым оператор выполняет определенные действия)
            operand = operand * 10 + (current_char - '0');
        }
        if (!isdigit(current_char) || i == length - 1) { //если символ не цифра или яв-ся последним,
            result = calculate(operator, result, operand);   // добавляем текущий операнд к результату,
            operand = 0;   // обнуляем и записываем новый оператор.
            operator = current_char;
        }
    }

    return result;
}

